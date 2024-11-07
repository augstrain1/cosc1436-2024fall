// Lab3
// August Strain
// COSC-1436:Fall2024

#include <iostream>
#include <iomanip>

    double fallingDistance(int t)
    {
        double d = 0;
        const double g = 9.8;

        d = (0.5 * g) * (pow(t,2));
        return d;
    } 

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

    int t = 9.8;
    double d = 0;

    for (int i = 1; i <= fallingTime; i++)
    {
        d = fallingDistance(i);
        std::cout << i << " seconds: " << d << " meters\n ";
    }
}
