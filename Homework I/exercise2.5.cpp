// Exercise 2.5
// Financial application: calculate tips

// Write a program that reads the subtotal and the gratuity rate, then computes the gratuity and total.

#include<iostream>

using namespace std;

int main(){
    double subtotal, gratuity_rate, gratuity, total;

    cout << "Enter the subtotal and a gratuity rate: ";
    cin >> subtotal >> gratuity_rate;

    gratuity = subtotal*gratuity_rate/100;  // Divide gratuity rate by 100 to get decimal number - 50% = 0.5
    total = subtotal+gratuity;

    cout << "The gratuity is $" << gratuity << " and total is $" << total << endl;

    return 0;
}
