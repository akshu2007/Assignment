#include <iostream>
using namespace std;

int main() 
{
    int a, b, c, x;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    if (a <= b && a <= c) 
    {
        x = a;
    }
    else if (b <= a && b <= c) 
    {
        x = b;
    }
    else
    {
        x = c;
    }
    cout << "Smallest number is: " << x << endl;
    return 0;
}