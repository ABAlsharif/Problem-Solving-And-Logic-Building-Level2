#include <iostream>
using namespace std;

/*Problem 11: Write a Program to read a number and check if it's Palindrome?
Note: Palindrome is a number that reads the same from right to left.*/


int ReadPositiveNumber(string Message) {
    int Number = 0;

    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int ReverseNumber(int Number) {

    int Reminder = 0;
    int Number2 = 0;

    while (Number > 0) {
        Reminder = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Reminder;
    }

    return Number2;
}

bool IsPalindromeNumber(int Number) {
    return (Number == ReverseNumber(Number));
}

int main() {

    if (IsPalindromeNumber(ReadPositiveNumber("Please Enter Positive Number? ")))
        cout << "\nYes, it's Palindrome Number.\n";
    else
        cout << "\nNo, it's Not Palindrome Number.\n";

}
