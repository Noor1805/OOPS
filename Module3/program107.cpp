#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
public:
    void area() {
        cout << "Area of Circle";
    }
};

int main() {
    Shape* s = new Circle();
    s->area();
    return 0;
}
