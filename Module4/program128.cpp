#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("a.txt");
    ofstream out("b.txt");
    string s;
    in >> s;
    out << s;
    in.close();
    out.close();
    return 0;
}
