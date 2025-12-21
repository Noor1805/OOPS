#include <iostream>
using namespace std;

class Queue {
    int q[5], f = 0, r = -1;
public:
    void insert(int x) { q[++r] = x; }
    void remove() { f++; }
};

int main() {
    Queue q;
    q.insert(10);
    q.remove();
    return 0;
}


