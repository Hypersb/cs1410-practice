#include <iostream>
#include <string>

using namespace std;

struct date {
    int year;
    string month;
    int day;
};

struct Point {
    int x, y;
};

void printdate(date & d) {
    cout << "dob: " << d.month << " " << d.day << ", " << d.year << endl;
}

void printpoint(Point & p) {
    cout << "Point: (" << p.x << ", " << p.y << ")" << endl;
}

int main() {
    date dob {2025, "march", 21};
    date Weddingday = { 2000, "May", 31};

    Point p, q, h;

    char trash;
    cout << "Enter point p: ";
    cin >> trash >> p.x >> trash >> p.y >> trash;
    
    cout << "Enter point q: ";
    cin >> trash >> q.x >> trash >> q.y >> trash;

    cout << "dob: " << dob.month << " " << dob.day << ", " << dob.year << endl;

    printdate(Weddingday);
    printdate(dob);

    printpoint(p);
    printpoint(q);  

    h.x = (p.x + q.x) / 2;
    h.y = (p.y + q.y) / 2;

    printpoint(h);
    
    return 0;
}