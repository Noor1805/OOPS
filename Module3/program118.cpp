#include <iostream>
using namespace std;

class Address {
public:
    int pin = 123;
};

class Person {
    Address* a;
public:
    Person(Address* ad) {
        a = ad;
    }
    void show() {
        cout << a->pin;
    }
};

int main() {
    Address ad;
    Person p(&ad);
    p.show();
    return 0;
}
