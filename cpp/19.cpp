#include <iostream>
using namespace std;

int main() 
{
    int x;
    cout << "Enter type of fuel (1: Petrol, 2: Diesel, 3: Electric): ";
    cin >> x;
    switch (x) 
    {
        case 1:
            cout << "Petrol" << endl;
            break;
        case 2:
            cout << "Diesel" << endl;
            break;
        case 3:
            cout << "Electric" << endl;
            break;
    }
    return 0;
}