#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << setw(6) << "odd" << setw(6) << "even" << endl;
    for(int i = 1; i < 20; i = i + 2){
        cout << setw(6) << i << setw(6) << i + 1 << endl;
    }

    return 0;
}