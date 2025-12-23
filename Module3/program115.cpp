#include <iostream>
using namespace std;

class Bill {
public:
    int amount;
    void total() {
        cout << "Bill = " << amount;
    }
};

int main() {
    Bill b;
    b.amount = 1500;
    b.total();
    return 0;
}
