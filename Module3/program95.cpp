#include <iostream>
using namespace std;

class Employee {
public:
    int salary;
};

class Payroll : public Employee {
public:
    void show() {
        cout << salary;
    }
};

int main() {
    Payroll p;
    p.salary = 30000;
    p.show();
    return 0;
}
