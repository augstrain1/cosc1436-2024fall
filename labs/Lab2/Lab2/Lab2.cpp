// Lab2.cpp
// August Strain
// COSC-1436:Fall2024

#include <iostream>
#include<iomanip>
//Included iomanip for use of std::setprecision()

int main()
{
    std::cout << "Lab 2\n";
    std::cout << "August Strain\n";
    std::cout << "COSC1436-Fall2024\n";

    std::string userName;

    std::cout << "Please Enter Your Name: \n";
    std::cin >> userName;
    std::cout << std::endl;

    double loanAmount = 0.0;
    while (loanAmount < 1 || loanAmount > 1000)
    {
        std::cout << "Please enter the loan amount: \n";
        std::cin >> loanAmount;
        std::cout << std::endl;
        if (loanAmount < 1 || loanAmount > 1000)
            std::cout << "ERROR: loan amount must be between 1 and 1000 ";
    };

    double interestRate = 0.0;
    while (interestRate < 1.0 || interestRate > 100.0)
    {
        std::cout << "Please enter the interest rate(%): \n";
        std::cin >> interestRate;
        std::cout << std::endl;
        if (interestRate < 1.0 || interestRate > 100.0)
            std::cout << "ERROR: Interest Rate must be between 1.0 and 100.0 ";
    };

    double monthlyPay = 0.0;
    while (monthlyPay <= 0 || monthlyPay > loanAmount)
    {
        std::cout << "How much do you want to pay each month? \n";
        std::cin >> monthlyPay;
        std::cout << std::endl;
        if (monthlyPay < 0 || monthlyPay > loanAmount)
            std::cout << "ERROR: Monthly Pay must be between 0 and the Loan Amount ";
    };

    double newBalanceCount = 1;
    double newBalance = (loanAmount - interestRate - monthlyPay);
    std::cout << "Your New Balance Is: " << std::fixed << std::setprecision(2) << newBalance << std::endl; 
}
