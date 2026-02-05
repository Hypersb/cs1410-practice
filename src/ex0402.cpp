#include <iostream>
using namespace std;

enum class Billkind {
    ONE, FIVE, TEN, TWENTY
};

struct cashinonebillkind {
    Billkind bill;
    int count;
};

struct cash {
    cashinonebillkind one;
    cashinonebillkind five;
    cashinonebillkind ten;
    cashinonebillkind twenty;
};

int totalcash(cash & c) {
    return (1 * c.one.count) + (5 * c.five.count) + (10 * c.ten.count) + (20 * c.twenty.count);
}

int main () {
    // Note: 'cash' must match the struct name exactly (case-sensitive)
    cash inwallet {
        {Billkind::ONE, 2},
        {Billkind::FIVE, 3},
        {Billkind::TEN, 1},
        {Billkind::TWENTY, 3}
    };

    cout << " Total Cash in wallet: " << totalcash(inwallet) << endl;
    
    return 0;
}