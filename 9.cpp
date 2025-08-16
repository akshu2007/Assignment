#include <iostream>
using namespace std;

int main() 
{
    char x;
    cout << "Enter a character: ";
    cin >> x;
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') 
    {
        cout << "Vowel" << endl;
    }
    else 
    {
        cout << "Consonant" << endl;
    }
    return 0;
}