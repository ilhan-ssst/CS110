// Exercise 2.22
// Financial application: calculate interest

// Write a program that reads the balance and the annual percentage interest rate and displays the interest for the next month.

#include<iostream>

using namespace std;

int main(){
    double balance, annual_interest_rate_percentage, interest;

    cout << "Enter the balance and the interest rate: ";
    cin >> balance >> annual_interest_rate_percentage;

    // Divide annual percentage by 12 to get monthly percentage, then divide by 100 to get decimal value
    interest = balance*annual_interest_rate_percentage/1200;

    cout << "The interest is: " << interest << endl;
    return 0;
}
