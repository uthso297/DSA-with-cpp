#include <iostream>
using namespace std;

int sumOfDigits(int num)
{
    int digitSum = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        num = num / 10;
        digitSum += lastDigit;
    }

    return digitSum;
}

int main()
{

    cout << "Sum = " << sumOfDigits(2356) << endl;

    return 0;
}