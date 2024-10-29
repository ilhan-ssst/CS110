// Exercise 2.14
// Health application: BMI

// Write a program that prompts the user to enter a weight in pounds and height in inches and displays the BMI;

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double weight, height, BMI;

    cout << "Enter weight in pounds: ";
    cin >> weight;

    cout << "Enter height in inches: ";
    cin >> height;

    BMI = (weight/pow(height, 2)) * 703;  // Multiply by 703 to convert in kilograms and meters (pound/inch^2 = 703 * kg/m^2)
    cout << "BMI is: " << BMI << endl;
    return 0;
}
