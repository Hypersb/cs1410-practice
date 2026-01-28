#include <iostream>
#include <string>

using namespace std;

string repChar(char, int);
long hms_2_secs(int h, int m, int s);
void swapV(double& x, double& y);

// Swap function using pass-by-reference
void swapV(double& x, double& y) {
    double t = x;
    x = y;
    y = t;
}

// Convert hours, minutes, seconds to total seconds
long hms_2_secs(int h, int m, int s) {
    long secs = h * 60 * 60 + m * 60 + s;
    return secs;
}

// Repeat character 'c', 'n' times
string repChar(char c, int n) {
    string r;
    for (int i = 0; i < n; i++) {
        r = r + c;
    }
    return r;
}

int main() {
    cout << repChar('X', 8) << endl;
    cout << hms_2_secs(4, 56, 17) << " seconds" << endl;

    double x = 10.0, y = 30.0;
    cout << x << " ," << y << endl;  // Before swap
    swapV(x, y);
    cout << x << " ," << y << endl;  // After swap

    return 0;
}
