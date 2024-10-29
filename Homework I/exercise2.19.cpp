// Exercise 2.19
// Geometry: area of a triangle

// Write a program that prompts the user to enter three points of a triangle and displays its area.

#include<iostream>
#include<cmath>

using namespace std;

double calculate_distance(double x1, double  y1, double x2, double y2){
    return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}

int main(){
    double x1,y1,x2,y2,x3,y3;
    double a,b,c,s,area;

    cout << "Enter three points for a triangle: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    a = calculate_distance(x1, y1, x2, y2);
    b = calculate_distance(x2, y2, x3, y3);
    c = calculate_distance(x3, y3, x1, y1);
    s = (a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    cout << "The area of the triangle is: " << area << endl;

    return 0;
}
