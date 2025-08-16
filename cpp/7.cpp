#include <iostream>
using namespace std;

int main() 
{
    int age;
    cout << "Enter the age: ";
    cin >> age;
    if (age >= 18) 
    {
        cout << "eligible" << endl;
    }
    else 
    {
        cout << "not eligible" << endl;
    }
    return 0;
}