#include <iostream>
using namespace std;

/*Problem 6: Write a Program Read a Number and Print the sum of its digits.*/

int ReadPositiveNumber(string Message) {

    int Number = 0;

    do {
        cout << Message << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;

}

int SumOfDigits(int Number) {

    int Reminder = 0;
    int Sum = 0;

    while (Number > 0) {

        Reminder = Number % 10;
        cout << Reminder << endl;
        Sum = Sum + Reminder;
        Number = Number / 10;
    }

    return Sum;
}

int main() {

    int Sum = SumOfDigits(ReadPositiveNumber("Please Enter Positive Number. "));
    cout<< "\n";
    cout << "\nSum Of Digits = " << Sum;


}
