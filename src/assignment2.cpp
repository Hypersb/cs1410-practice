#include <iostream>
#include <iomanip>  // for setw()

using namespace std;

int main() {
    // Variables
    int number;      // stores user input.. 
    int count = 0;   // number of valid integers entered.. 
    int total = 0;   // sum of valid integers.. 
    int minVal = 0;  // minimum of valid integers..
    int maxVal = 0;  // maximum of valid intigers..
    double average;  // average as double..

    // Loop until we have 5 valid integers.... 
    while (count < 5) {
        cout << "Enter a positive integer that is a multiple of 3:\n";
        cin >> number;

        // Input validation
        if (number > 0 && number % 3 == 0) {
            if (count == 0) {       // first valid number...
                minVal = maxVal = number;
            } else {
                if (number < minVal)
                    minVal = number;
                if (number > maxVal)
                    maxVal = number;
            }

            // Update total and count... 
            total += number;
            count++;
        } else {
            cout << "Invalid integer: not positive or not a multiple of 3.\n";
        }
    }

    // Calculate average.. 
    average = static_cast<double>(total) / count;

    // Display results in table format like shown... 
    cout << "\n Count   Minimum   Maximum   Total   Average\n";
    cout << "============================================\n";
    cout << setw(6) << count
         << setw(9) << minVal
         << setw(9) << maxVal
         << setw(8) << total
         << setw(9) << average << endl;

    return 0;
}