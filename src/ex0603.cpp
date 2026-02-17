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
int totalcash2(cash * c) {
    return (1 * c->one.count) + (5 * c->five.count) + (10 * c->ten.count) + (20 * c->twenty.count);
}
int main () {
    
    cash inwallet {
        {Billkind::ONE, 2},
        {Billkind::FIVE, 3},
        {Billkind::TEN, 1},
        {Billkind::TWENTY, 3}
    };

    cout << " Total Cash in wallet: " << totalcash(inwallet) << endl;
    cout << " Total Cash in wallet: " << totalcash2(&inwallet) << endl;
    
    cash * dwalletm = new cash {
        {Billkind::ONE, 2},
        {Billkind::FIVE, 3},
        {Billkind::TEN, 1},
        {Billkind::TWENTY, 3}
    };

    cout << " Total Cash in wallet: " << totalcash(*dwalletm) << endl;
    cout << " Total Cash in wallet: " << totalcash2(dwalletm) << endl;
    delete dwalletm;
    return 0;
}