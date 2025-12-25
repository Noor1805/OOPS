#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt");
    file << "Hello File";
    file.close();
    return 0;
}
