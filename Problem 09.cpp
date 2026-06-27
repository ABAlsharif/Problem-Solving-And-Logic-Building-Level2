#include <iostream>
using namespace std;

/*Problem 9: Write a Program Read a digit and number , then print all digits freqency in that number.*/

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
    int Freq = 0;
    int Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;

        if (DigitToCheck == Remainder)
        {
            Freq++;
        }
    }
    return Freq;
}

void PrintAllDigitsFrequencey(int Number)
{
    cout << endl;

    for (int i = 0; i <= 9; i++)
    {
        short DigitFrequency = 0;
        DigitFrequency = CountDigitFrequency(i, Number);

        if (DigitFrequency > 0)
        {
            cout << "Digit " << i << " Frequencey is "
                << DigitFrequency << " Time(s).\n";
        }
    }
}

int main()
{
    int Number = ReadPositiveNumber("Please enter the a number?");
    PrintAllDigitsFrequencey(Number);

}
