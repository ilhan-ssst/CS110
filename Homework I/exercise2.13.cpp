// Exercise 2.13
// Financial application: compound value

// Write a program that prompts the user to enter a monthly saving amount and displays the account value after the sixth month
// The annual interest rate is 5%

#include<iostream>

using namespace std;

int main(){
    double annual_interest_rate = 0.05;  // 5%
    double monthly_interest_rate = annual_interest_rate/12;  // 1 year has 12 months

    double PMT, current_account_value(0);

    cout << "Enter the monthly saving amount: ";
    cin >> PMT;

    for(int i=0;i<6;i++){
        current_account_value+=PMT;  // Monthly deposit
        current_account_value*=(1+monthly_interest_rate);  // Calculating interest
    }

    cout << "After the sixth month, the account value will is $" << current_account_value << endl;
    return 0;
}
