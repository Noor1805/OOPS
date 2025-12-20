#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    float salary;
};

int main() {
    Employee e;
    e.id = 101;
    e.salary = 25000;
    cout << e.id << " " << e.salary;
    return 0;
}
