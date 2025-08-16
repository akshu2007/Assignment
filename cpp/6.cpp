#include <iostream>
using namespace std;

int main() 
{
    double num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0) 
    {
        cout << "positive" << endl;
    }
    else
    {
        cout << "negative" << endl;
    }
    return 0;
}