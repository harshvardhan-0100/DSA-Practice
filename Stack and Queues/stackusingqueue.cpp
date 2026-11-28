#include <bits/stdc++.h>
using namespace std; 

class myStack {

    queue<int> q; 

public: 
    void push(int x) {
        int s = q.size(); 

        q.push(x); 

        for (int i = 0; i < s; i++) {
            q.push(q.front()); 

            q.pop(); 
        }
    }

    void pop() {
        if (!q.empty()) {
            q.pop(); 
        }
    }

    int top() {
        if (q.empty()) return -1; 

        return q.front(); 
    }

    int size() {
        return q.size(); 
    }
}; 

int main() {

}