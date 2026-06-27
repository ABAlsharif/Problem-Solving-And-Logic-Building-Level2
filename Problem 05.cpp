#include <iostream>
using namespace std;

/*Problem 5: Write a Program Read a Number and Print it in a Reversed Order.*/

int ReadPositiveNumber(string Message) {

    int Number = 0;

    do {
        cout << Message << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

void PrintDigits(int Number) {

    int Reminder = 0;

    while(Number>0){

    Reminder = Number % 10;
    Number /= 10;

    cout << Reminder << endl;

    }
}

int main() {
    PrintDigits(ReadPositiveNumber("Please Enter Positive Number."));
}

