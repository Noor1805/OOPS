#include <iostream>
using namespace std;

class Product {
public:
    int price;
    void show() {
        cout << price;
    }
};

int main() {
    Product p;
    p.price = 500;
    p.show();
    return 0;
}
