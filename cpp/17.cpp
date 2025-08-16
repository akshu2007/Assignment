#include <iostream>
using namespace std;

int main() 
{
    double x, y;
    char a;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    cout << "Enter operation (+, -, *, /): ";
    cin >> a;
    if (a == '+') 
    {
        cout << "Result: " << x + y << endl;
    }
    else if (a == '-') 
    {
        cout << "Result: " << x - y << endl;
    }
    else if (a == '*') 
    {
        cout << "Result: " << x * y << endl;
    }
    else if (a == '/') 
    {
        if (y != 0)
            cout << "Result: " << x / y << endl;
        else
            cout << "Cant be divided by zero" << endl;
    }
    return 0;
}