    #include <iostream>
    using namespace std;

    int main() 
    {
        int x;
        cout << "Enter (1-12): ";
        cin >> x;
        switch (x) 
        {
            case 1: case 3: case 5: case 7:
            case 8: case 10: case 12:
                cout << "Number of days: 31" << endl;
                break;
            case 4: case 6: case 9: case 11:
                cout << "Number of days: 30" << endl;
                break;
            case 2:
                cout << "Number of days: 28 or 29" << endl;
                break;
        }
        return 0;
    }