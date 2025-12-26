#include <iostream>
#include <fstream>
using namespace std;

int main() {
    try {
        ifstream f("no.txt");
        if (!f) throw "Error";
    } catch (...) {
        cout << "File error";
    }
    return 0;
}
