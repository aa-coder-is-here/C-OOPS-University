#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point();
    Point(int a, int b);
    ~Point();

    void setx(int a);
    void sety(int b);
    int getx();
    int gety();

    Point operator++();    
    Point operator++(int); 
    Point operator--();    
    Point operator--(int); 

    void display();
};

Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(int a, int b) {
    x = a;
    y = b;
}

Point::~Point() {
    cout << "Point object destroyed." << endl;
}

void Point::setx(int a) {
    x = a;
}

void Point::sety(int b) {
    y = b;
}

int Point::getx() {
    return x;
}

int Point::gety() {
    return y;
}

Point Point::operator++() {
    Point temp;
    temp.x = ++x;
    temp.y = ++y;
    return temp;
}

Point Point::operator++(int) {
    Point temp(x, y);
    x++;
    y++;
    return temp;
}

Point Point::operator--() {
    return Point(--x, --y);
}

Point Point::operator--(int) {
    return Point(x--, y--);
}

void Point::display() {
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}

int main() {
    Point p1, p2;

    cout << "Initial values: " << endl;
    cout << "P1: ";
    p1.display();
    cout << "P2: ";
    p2.display();

    p2 = ++p1;
    cout << endl << "After p2 = ++p1: " << endl;
    cout << "P1: ";
    p1.display();
    cout << "P2: ";
    p2.display();

    p2 = --p1;
    cout << endl << "After p2 = --p1: " << endl;
    cout << "P1: ";
    p1.display();
    cout << "P2: ";
    p2.display();

    p2 = p1++;
    cout << endl << "After p2 = p1++: " << endl;
    cout << "P1: ";
    p1.display();
    cout << "P2: ";
    p2.display();

    p2 = p1--;
    cout << endl << "After p2 = p1--: " << endl;
    cout << "P1: ";
    p1.display();
    cout << "P2: ";
    p2.display();

    return 0;
}
