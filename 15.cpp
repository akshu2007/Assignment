#include <iostream>
#include <cctype>
using namespace std;

int main() 
{
    char x;
    cout << "Enter a character: ";
    cin >> x;
    if (isalpha(x)) 
    {
        cout << "It is an alphabet" << endl;
    }
    else if (isdigit(x)) 
    {
        cout << "It is a digit" << endl;
    }
    else 
    {
        cout << "It is a special character" << endl;
    }
    return 0;
}