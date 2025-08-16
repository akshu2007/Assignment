#include <iostream>
using namespace std;

int main() 
{
    double marks;
    cout << "Enter the marks: ";
    cin >> marks;

    if (marks >= 40)  
    {
        cout << "Passed" << endl;
    }
    else 
    {
        cout << "Failed" << endl;
    }
    return 0;
}