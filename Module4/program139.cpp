#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("data.txt");
    int x;
    while (f >> x) {
        if (x == 5) {
            cout << "Found";
            break;
        }
    }
    f.close();
    return 0;
}
