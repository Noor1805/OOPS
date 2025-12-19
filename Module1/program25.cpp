#include <iostream>
using namespace std;

int main() {
    int d = 3;

    switch (d) {
        case 1: cout << "Mon"; break;
        case 2: cout << "Tue"; break;
        case 3: cout << "Wed"; break;
        default: cout << "Invalid";
    }
    return 0;
}
