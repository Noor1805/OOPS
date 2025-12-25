#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f("test.txt", ios::out);
    f << "Hello";
    f.close();
    return 0;
}
