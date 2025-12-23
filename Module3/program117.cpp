#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine started";
    }
};

class Car {
    Engine e;
public:
    void drive() {
        e.start();
    }
};

int main() {
    Car c;
    c.drive();
    return 0;
}
