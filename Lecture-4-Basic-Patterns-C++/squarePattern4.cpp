/*
Enter how many lines you want: 3
ABC
DEF
GHI
*/
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter how many lines you want: ";
    int n;
    cin >> n;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}