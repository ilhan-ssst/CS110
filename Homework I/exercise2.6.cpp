// Exercise 2.6
// Sum the digits in an integer

// Write a program that reads an integer value between 0 and 1000 and adds all th digits in the integer.

#include<iostream>

using namespace std;

// This can be also solved using recursion, but that is not the optimal solution here
int recursive_sum_of_digits(int number){
    if (number == 0) return 0;
    return number%10 + recursive_sum_of_digits(number/10);
}

int main(){
    int number, sum_of_digits(0);

    cout << "Enter a number between 0 and 1000: ";
    cin >> number;

    while(number != 0){  // The result in integer division between a single digit number and 10 is 0
        sum_of_digits += number%10;  // Add the last digit
        number/=10;  // Remove the last digit
    }

    cout << "The sum of the digits is: " << sum_of_digits << endl;

    return 0;
}
