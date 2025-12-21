#include <iostream>
using namespace std;

class Stack {
    int s[5], top = -1;
public:
    void push(int x) { s[++top] = x; }
    void pop() { top--; }
};

int main() {
    Stack st;
    st.push(10);
    st.pop();
    return 0;
}
