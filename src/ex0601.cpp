#include <iostream>
using namespace std;

void reduce_balance(int* ptr, int w) {
    *ptr -= w;  
}

int main() {
    int balance = 85;
    int* ptr = &balance;

    cout << balance << endl << ptr << endl;

    int w = 15;
    reduce_balance(ptr, w);
    cout << balance << endl; 

    int* dbalance = new int(100);   

    cout << *dbalance << endl;

    delete dbalance;

    return 0;
}
