// Exercise 2.21
// Cost of driving

// Write a program that prompts the user to enter the distance to drive, the fuel efficiency of the car in miles per gallon, and the price per gallon,
// and display the cost of the trip.


#include<iostream>

using namespace std;

int main(){
    double distance, fuel_efficiency, price_per_gallon, cost;

    cout << "Enter the driving distance: ";
    cin >> distance;

    cout << "Enter miles per gallon: ";
    cin >> fuel_efficiency;

    cout << "Enter price per gallon: ";
    cin >> price_per_gallon;

    cost = price_per_gallon * distance / fuel_efficiency;  // Distance/Consumption will give us the gallons of fuel used, multiply it by price per gallon to get the total cost

    cout << "THe cost of driving is $" << cost << endl;


    return 0;
}
