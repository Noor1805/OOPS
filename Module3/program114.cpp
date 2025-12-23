#include <iostream>
using namespace std;

class Employee {
public:
    int salary;
    void show() {
        cout << salary;
    }
};

int main() {
    Employee e;
    e.salary = 30000;
    e.show();
    return 0;
}
