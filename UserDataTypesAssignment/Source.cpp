#include "Header.h"
#include <iostream>

const float Employee::Tax = 0.1f;


void Employee::Read() {

    std::cout << "\nEnter your First Name: ";
    std::cin >> firstName;
    std::cout << "Enter your Last Name: ";
    std::cin >> lastName;
    std::cout << "Enter your Age: ";
    std::cin >> age;
    std::cout << "Enter your zipcode: ";
    std::cin >> zipcode;
    std::cout << "Enter your wage: ";
    std::cin >> wage;
    std::cout << "Enter the days you've worked: ";
    std::cin >> daysWorked;

    for (int i = 0; i < daysWorked; i++) {
        std::cout << "Enter hours worked for day " << i + 1 << ": ";
        std::cin >> hoursWorkedPerDay[i];  
    } 
}

void Employee::Write() {
    //gross is total income
    float grossIncome;
    //net is income after tax
    float netIncome;
    static int totalHours;

    for (int i = 0; i < daysWorked; i++) {
        totalHours += hoursWorkedPerDay[i];
    }

    grossIncome = wage * totalHours;
    netIncome = grossIncome - (grossIncome * Tax);
 
    std::cout << "\n" << firstName << " " << lastName << ": " 
        << "\nAge: " << age 
        << "\nZipcode: " << zipcode
        << "\nWage: " << wage 
        << "\n" << firstName << " worked " << daysWorked << " days with "
        << totalHours << " hrs for a total of $" << grossIncome << " but..."
        << "\n" << "Taxes... So " << firstName << " actually earned $" << netIncome << "\n";
}