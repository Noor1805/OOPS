#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream f("data.txt", ios::in | ios::out);
    f.seekp(0);
    f << 99;
    f.close();
    return 0;
}
