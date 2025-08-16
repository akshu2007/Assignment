#include <iostream>
#include <ctype.h>
using namespace std;

int main() 
{
    char x;
    cout << "Enter a letter: ";
    cin >> x;
    if (isupper(x)) 
    {
        cout << "uppercase." << endl;
    }
    else 
    {
        cout << "not uppercase." << endl;
    }
    return 0;
}