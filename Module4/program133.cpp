#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int roll = 1;
    ofstream f("student.txt");
    f << roll;
    f.close();
    return 0;
}
