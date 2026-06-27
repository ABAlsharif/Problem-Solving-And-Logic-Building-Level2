#include <iostream>
using namespace std;


/*Problem 8: Write a Program Read a digit and number , then print digit freqency in that number.*/

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

int CountDigitFrequency(short DigitToCheck, int Number)
{
    int FreqCount = 0;
    int Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;

        if (DigitToCheck == Remainder)
        {
            FreqCount++;
        }
    }
    return FreqCount;
}

int main()
{
    int Number = ReadPositiveNumber("Please enter the main number?");
    short DigitToCheck = ReadPositiveNumber("Please enter one digit to check?");

    cout << "\nDigit " << DigitToCheck << " Frequency is "
        << CountDigitFrequency(DigitToCheck, Number) << " Time(s).\n";

}
