#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int id;
};

int main() {
    Student s{101};
    ofstream f("obj.txt");
    f << s.id;
    f.close();

    ifstream in("obj.txt");
    in >> s.id;
    cout << s.id;
    in.close();
    return 0;
}
