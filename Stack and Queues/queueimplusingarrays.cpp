#include <bits/stdc++.h>
using namespace std; 

class qImpl{
    public: 
    int size = 10;
    int q[10];
    int currsize = 0, start = 0, end = 0; 


    void push(int x) {
        if (currsize >= size) {
            cout << "queue is full" << "\n";
        } 
        else if (currsize == 0) {
            start++; 
            end++; 
        } else {
            start = (start + 1) % size; 
        }

        q[start] = x; 
        currsize++; 
    }

    void pop() {
        if (currsize == 0) {
            cout << "queue is empty" << "\n"; 
        } else {
            start--; 
        }
    }
}; 

int main() {

}