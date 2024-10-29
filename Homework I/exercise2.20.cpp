// Exercise 2.20
// Slope of a line

// Write a program that prompts the user to enter the coordinates of two points, and displays the slope of the line that connects the two points.

#include<iostream>

using namespace std;

int main(){
    double x1, y1, x2, y2, slope;

    cout << "Enter the coordinates for two points: ";
    cin >> x1 >> y1 >> x2 >> y2;

    slope = (y2-y1)/(x2-x1);

    cout << "The slope of the line is: " << slope << endl;

    return 0;
}
