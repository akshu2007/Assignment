#include <iostream>
using namespace std;

// Rectangle perimeter calculator
int calculatePerimeter(int length, int width) {
    return 2 * (length + width);
}

int main() {
    int length = 5;
    int width = 3;
    cout << "Perimeter: " << calculatePerimeter(length, width) << endl; // Output: Perimeter: 16
    return 0;
}
