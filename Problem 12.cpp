#include <iostream>
using namespace std;

/*Problem 12: Write a program to read a number and print inverted pattern as follows?

Input:             Output:
3                   333
                    22
                    1
Input:             Output:
5                   55555
                    4444
                    333
                    22
                    1
*/


int ReadPositiveNumber(string Message) {
    int Number = 0;

    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

void PrintInvertedNumberPattern(int Number) {

    cout << "\n";

    for (int i = Number; i >= 1; i--) {

        for (int j = 1; j <= i; j++) {

            cout << i;
        }

        cout << "\n";
    }
}

int main() {

    PrintInvertedNumberPattern(ReadPositiveNumber("Please Enter a Positive Number."));
}
