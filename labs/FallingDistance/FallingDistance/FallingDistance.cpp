// Lab3
// August Strain
// COSC-1436:Fall2024

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Lab 3\n";
    std::cout << "August Strain\n";
    std::cout << "COSC1436-Fall2024\n";

    std::string userName;

    std::cout << "Please Enter Your Name: \n";
    std::cin >> userName;
    std::cout << std::endl;

    double fallingTime = 0.0;

    do
    {
        std::cout << "Please enter your Falling Time: \n";
        std::cin >> fallingTime;

        if (fallingTime >= 1 && fallingTime <= 60)
            break;
        
        std::cout << "ERROR: Falling Time must be between 1 and 60 seconds " << std::endl;
    } while (true);
}