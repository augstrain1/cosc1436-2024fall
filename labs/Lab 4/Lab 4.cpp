//August Strain
//COSC-1436

#include <iostream>

using namespace std;

int main()
{
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
    int largest = 0;

    std::cout << "Please enter up to 100 integer values: ";
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

    largest = num1;
    if (num2 > largest)
        largest = num2;
    if (num3 > largest)
        largest = num3;
    if (num4 > largest)
        largest = num4;
    if (num5 > largest)
        largest = num5;
}
