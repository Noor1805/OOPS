#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int roll;
};

int main() {
    Student s{5};
    ofstream f("stu.dat", ios::binary);
    f.write((char*)&s, sizeof(s));
    f.close();

    ifstream in("stu.dat", ios::binary);
    in.read((char*)&s, sizeof(s));
    cout << s.roll;
    in.close();
    return 0;
}
