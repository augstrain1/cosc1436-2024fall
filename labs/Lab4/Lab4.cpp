//August Strain
//COSC-1436
//Lab 4

#include <iostream>

using namespace std;

void DisplayIntArray(int* arr, int size)
{
    for (int index = 0; index < 100; ++index)
        std::cout << arr[index] << " ";
    std::cout << std::endl;
}

void ArrayPointerDemo(int array, int size)
{
    int values[100];

    int* ptrValues = values;

    for (int index = 0; index < 100; ++index)
    {
        *(ptrValues + index) = index + 1;
    }

    DisplayIntArray(values, 100);

    int localVariable = 100;
    DisplayIntArray(&localVariable, 1);
}

void NewArrayDemo()
{
    //double arr[100]

    //Dynamically allocate array at runtime
    int size;
    std::cout << "How many elements: ";
    std::cin >> size;

    double* arr = new double[size];

    for (int index = 0; index < size; ++index)
    {
        std::cout << "Enter a value: ";
        std::cin >> arr[index];

        if (arr[index] == 0)
            break;
    }

    delete[] arr;
}

void Menu()
{
    int choice;        

    do
    {
        cout << "1. Largest\n2. Smallest\n3. Add\n4. Mean\n5. View values\n6. Insert Value\n7.Quit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Your largest value: \n";
            break;
        case 2:
            cout << "Your smallest value: \n";
            break;
        case 3:
            cout << "The sum of your values: \n";
            break;
        case 4:
            cout << "The mean average of your values: \n";
            break;
        case 5:
            cout << "Here are your values: \n";
            break;
        case 6:
            cout << "Insert Value: \n";
            break;
        case 7:
            cout << "Goodbye :) \n";
            break;
        }


    } while (choice != 7);
}

int main()
{    
    int values;
    int months;
    int size;

    std::cout << "Lab 4" << std::endl;
    std::cout << "August Strain" << std::endl;
    std::cout << "COSC-1436" << std::endl;
    
    //DisplayIntArray()
    //PointerArrayDemo()
    //NewArrayDemo()
    NewArrayDemo();
    Menu();
}

