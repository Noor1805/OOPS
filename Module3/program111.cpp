#include <iostream>
using namespace std;

class Bank {
    int balance;
public:
    Bank() { balance = 1000; }
    void deposit(int amt) { balance += amt; }
    void show() { cout << balance; }
};

int main() {
    Bank b;
    b.deposit(500);
    b.show();
    return 0;
}
