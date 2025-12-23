#include <iostream>
using namespace std;

class Cart {
public:
    int price;
    void show() {
        cout << "Total = " << price;
    }
};

int main() {
    Cart c;
    c.price = 2000;
    c.show();
    return 0;
}
