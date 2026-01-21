#include <iostream>
#include <string>

using namespace std;

int main(){
    cout  << "Enter Day:";
    string day;
    cin >> day;

    if(day == "Saturday" || day == "Sunday"){
        cout << "It is a weekend." << endl;
    }
    else {
        cout << "It is a weekday." << endl;
    }

    return 0;
}