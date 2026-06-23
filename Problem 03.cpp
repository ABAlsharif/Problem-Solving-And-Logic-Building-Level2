#include <iostream>
using namespace std;

/*Problem 3: write a program to check if the number is perfect or not?

* Note: Perfect Number = sum (all divisors)*/

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
bool isPerfectNumber(int Number) {

    int Sum = 0;

    for (int i = 1; i < Number; i++) {

        if (Number % i == 0)

            return Sum += i;
    }

    return Number == Sum;

}

void PrintResults(int Number) {
    if (isPerfectNumber(Number))
        cout << Number << " Is Perfect Number.\n";
    else
        cout << Number << " Is Not Perfect Number.\n";
}

int main() {

    PrintResults(ReadPositiveNumber("Please Enter Psitive Number."));

}
