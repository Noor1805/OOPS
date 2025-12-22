#include <iostream>
using namespace std;

class Student {
public:
    int roll;
};

class Marks : public Student {
public:
    int m1, m2;
    void total() {
        cout << m1 + m2;
    }
};

int main() {
    Marks s;
    s.m1 = 40;
    s.m2 = 50;
    s.total();
    return 0;
}
