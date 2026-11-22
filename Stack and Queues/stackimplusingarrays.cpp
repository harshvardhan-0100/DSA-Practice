#include <bits/stdc++.h>
using namespace std; 

class stImpl {
    public: 
    int st[10] = {0}; 
    int top = -1; 

    void push(int x) {
        if (top >= 10) cout << "size limit exceeded" << "\n"; 
    }

    void pop() {
        if (top == 0) cout << "empty stack" << "\n"; 
    }

    void topf() {
        if (top == 0) cout << "empty stack" << "\n"; 
        cout << st[top]; 
    }

    void size() {
        cout << top + 1 << "\n"; 
    }
};

int main() {
    stImpl stack; 
    stack.push(7); 
    stack.push(5); 
    stack.pop();
    stack.topf();  
    stack.push(3);
    stack.size(); 
    stack.push(2); 
    stack.push(10); 
    stack.pop(); 
    stack.topf(); 
    stack.size(); 
    stack.pop(); 
    stack.pop(); 
    stack.pop(); 
    stack.size(); 
    stack.topf(); 
    stack.pop(); 

    return 0; 

}