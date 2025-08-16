#include <iostream>
using namespace std;
int main() 
{
    int x;
    cout << "Enter your choice (1: Tea, 2: Coffee, 3: Juice): ";
    cin >> x;
    switch (x) 
    {
        case 1:
            cout << "Tea." << endl;
            break;
        case 2:
            cout << "Coffee." << endl;
            break;
        case 3:
            cout << "Juice." << endl;
            break;
    return 0;
}