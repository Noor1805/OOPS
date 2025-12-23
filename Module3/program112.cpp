#include <iostream>
using namespace std;

class Student {
public:
    int m1, m2;
    void result() {
        cout << "Total = " << m1 + m2;
    }
};

int main() {
    Student s;
    s.m1 = 40;
    s.m2 = 50;
    s.result();
    return 0;
}
