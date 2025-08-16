#include <iostream>
using namespace std;

int main() 
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " \nleap year" << endl;
    } 
    else 
    {
        cout << year << "\nnot a leap year" << endl;
    }
    return 0;
}