// Exercise 2.7
// Find the number of years

// Write a program that prompts the user to enter the minutes, and displays the number of years and days for the minutes.
// Assume a year has 365 days

#include<iostream>

using namespace std;

int main(){
    int minutes, days, years;

    cout << "Enter the number of minutes ";
    cin >> minutes;

    days = minutes/1440;  // Total number of days (60*24=1440)

    years = days/365;  // Integer division returns years and ignores the remaining days
    days %= 365;  // Gets the remaining days

    cout << minutes << " minutes is approximately " << years << " and " << days << " days." << endl;

    return 0;
}
