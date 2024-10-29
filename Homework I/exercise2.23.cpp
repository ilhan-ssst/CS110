// Exercise 2.23
// Financial application: future investment value

// Write a program that reads an investment amount, annual interest rate, and number of years, and displays the future investment value.

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double investment_amount, annual_interest, years, future_value;

    cout << "Enter the investment amount: ";
    cin >> investment_amount;

    cout << "Enter annual interest rate in percentage: ";
    cin >> annual_interest;

    cout << "Enter number of years: ";
    cin >> years;

    // Divide annual percentage by 12 to get monthly percentage, then divide by 100 to get decimal value
    future_value = investment_amount * pow(1+annual_interest/1200, years*12);
    cout << "Accumulated value is $" << future_value << endl;
    return 0;
}
