#include <iostream>
using namespace std;

/*Problem10: write a Program read a number and print it in order from left tp right.*/

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
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

void PrintDigits(int Number) {

    int Reminder = 0;

    while (Number > 0) {
        Reminder = Number % 10;
        Number = Number / 10;

        cout << Reminder << endl;

    }
}

int main() {

    PrintDigits(ReverseNumber(ReadPositiveNumber("Please Enter a Positive Number? ")));
}
