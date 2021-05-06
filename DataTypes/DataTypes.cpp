// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

using namespace std;



int main(){
    string name;
    char inital;
    int age;
    bool isAdult;
    int zipcode;
    float wage;
    int daysWorked;
    int hoursWorkedPerDay[7];
    const float tax = .1f;
    int totalHours = 0;
    //gross is total income
    float grossIncome;
    //net is income after tax
    float netIncome;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your initial: ";
    cin >> inital;
    cout << "Enter your Age: ";
    cin >> age;
    cout << "Enter your zipcode: ";
    cin >> zipcode;
    cout << "Enter your wage: ";
    cin >> wage;
    cout << "Enter the days you've worked: ";
    cin >> daysWorked;

    for (int i = 0; i < daysWorked; i++) {
        cout << "Enter hours worked for day " << i + 1 << ": ";
        cin >> hoursWorkedPerDay[i];
        totalHours += hoursWorkedPerDay[i];
    }

    grossIncome = wage * totalHours;
    netIncome = grossIncome - (grossIncome * tax);

    cout << name << " " << inital << ": " << "\nAge: " << age << "\nZipcode: " << zipcode
        << "\nWage: " << wage << endl << name <<" worked " << daysWorked << " days with " 
        << totalHours << " hrs for a total of $" << grossIncome << " but..." 
        << endl << "Taxes... So " << name << " actually earned $" << netIncome;
}

/*void checkAge() {
    if (age < 18) {
        isAdult = false;
    }
    else {
        isAdult = true;
    }
}
*/



/*int main()
{
   Garry::print();

    cout << "Hello World!\n";
    cout << "Git\n";

    int age;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Age: " << age << endl;


}
*/
