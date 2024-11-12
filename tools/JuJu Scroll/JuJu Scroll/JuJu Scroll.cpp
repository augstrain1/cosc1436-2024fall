#include <iostream>

// Pointers can be passed as parameters
//void DisplayIntArray(int arr[], int size)
void DisplayIntArray(int* arr, int size)
{
    for (int index = 0; index < 100; ++index)
        std::cout << arr[index] << " ";
    std::cout << std::endl;
}

void ArrayPointerDemo(int array, int size)
{
    int values[100];

    //Array variables are pointers
    int* ptrValues = values;

    for (int index = 0; index < 100; ++index)
    {
        //Pointer arithmetic
        // Add/subtraction
        // Value is always multiplied by sizeof(T) so you are referencing a whole element
        //arr[index] = arr + index = arr + (sizeof(t) * index)
        // arr[index] = *(arr + index)
        *(ptrValues + index) = index + 1;
    }
    /*for (int index = 0; index < 100; ++index)
        values[index] = index + 1;*/

    DisplayIntArray(values, 100);

    int localVariable = 100;
    DisplayIntArray(&localVariable, 1);
}

void NewArrayDemo()
{
    //double arr[100];

    //Dynamically allocate array at runtime
    int size;
    std::cout << "How many elements: ";
    std::cin >> size;

    //Array decl won't work at runtime
    // new T[size]
    //   Size must be integral and > 0

    double* arr = new double[size];

    //Arrays and pointers are interchangeable so nothing else changes
    for (int index = 0; index < size; ++index)
    {
        std::cout << "Enter a value: ";
        std::cin >> arr[index];

        if (arr[index] == 0)
            break;
    }

    //Cleanup
    //delete arr; // This is wrong by the way
    delete[] arr; // Required for arrays
}

void NewArrayDemo2()
{
    while (true)
    {
        NewArrayDemo();

        std::cout << "Keep going (Y/N)?";

        char choice;
        std::cin >> choice;

        if (choice == 'N' || choice == 'n')
            break;
    }
}

void InitializeEmployeeByRef(int& employee)
{
    std::cout << "Enter the employee ID: ";
    //std::getline(std::cin, employee.Name);
    std::cin >> employee;
}

// Employee is pass by reference, any changes to employee are visible to caller
void InitializeEmployeeByPtr(int* employee)
{
    //Validate pointer
    if (employee) //employee != nullptr || employee != NULL
    {
        //employee++;
        
        std::cout << "Enter the employee name: ";
        //std::getline(std::cin, employee.Name
        std::cin >> *employee;

    }
    
}

void PassByRefVsPointerDemo()
{
    //Employee employee;
    int employeeId;

    //Pass by ref - must pass a variable
    InitializeEmployeeByRef(employeeId);

    // Pass by value - must pass the address of variable
    InitializeEmployeeByPtr(&employeeId);

    InitializeEmployeeByPtr(nullptr);
}

int main()
{
    //DisplayIntArray()
    //ArrayPointerDemo()
    NewArrayDemo();
}
