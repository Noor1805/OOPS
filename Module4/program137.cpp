#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int x = 10;
    ofstream f("bin.dat", ios::binary);
    f.write((char*)&x, sizeof(x));
    f.close();

    ifstream in("bin.dat", ios::binary);
    in.read((char*)&x, sizeof(x));
    cout << x;
    in.close();
    return 0;
}
