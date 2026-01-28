#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Function definition
string findQuadrant(double deg) {
    // Formula: radians = degrees * (PI / 180)
    double rad = 3.14159 * deg / 180.0;
    
    if (sin(rad) >= 0 && cos(rad) >= 0) {
        return "Quadrant I";
    } else if (sin(rad) >= 0 && cos(rad) < 0) {
        return "Quadrant II";
    } else if (sin(rad) < 0 && cos(rad) < 0) {
        return "Quadrant III";
    } else {
        return "Quadrant IV";
    }
}

int main() {
    cout << findQuadrant(23) << endl;
    cout << findQuadrant(123) << endl;
    cout << findQuadrant(223) << endl;
    cout << findQuadrant(323) << endl;

    return 0;
}