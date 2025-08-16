#include <iostream>
using namespace std;

int main() 
{
    double marks;
    cout << "Enter marks: ";
    cin >> marks;
    if (marks >= 90) 
    {
        cout << "A" << endl;
    }
    else if (marks >= 75) 
    {
        cout << "B" << endl;
    }
    else if (marks >= 50) 
    {
        cout << "C" << endl;
    }
    else {
        cout << "Fail" << endl;
    }
    return 0;
}