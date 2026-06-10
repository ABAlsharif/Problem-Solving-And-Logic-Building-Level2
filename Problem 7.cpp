#include <iostream>
using namespace std;

/*Problem 7: Write a Program Read a Number and Print it Reversed.*/

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
        Number2 = Number2*10 + Reminder;
    }

    return Number2;
}

int main() {

    int Sum = ReverseNumber(ReadPositiveNumber("Please Enter Positive Number. "));
    cout << "\n";
    cout << "\nReverse is: " << Sum;


}


