#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string x;
    string y = "admin123";
    cin >> x;
    if (y.find(x) != string::npos) 
    {
        cout << "Welcome" << endl;
    }
    else 
    {
        cout << "Invalid password" << endl;
    }
    return 0;
}