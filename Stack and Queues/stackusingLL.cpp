#include <bits/stdc++.h>
using namespace std; 

class Node {
    public: 
    int data; 
    Node* next; 

    public: 
    Node (int data, Node* next) : data(data), next(next) {}

    public: 
    Node (int data) : data(data), next(nullptr) {}
}; 

class stackImp {
    Node* top = nullptr;  int currsize = 0; 

    Node* push(int x) {
        Node* temp = new Node(x); 
        temp->next = top; 
        top = temp; 
        currsize++; 
        return top; 
    }

    Node* pop() {
        Node* temp = top; 
        top = top->next; 
        delete temp; 
        currsize--; 
        return top; 
    }

    int size() {
        return currsize; 
    }

    int stackTop() {
        return top->data; 
    }
}; 

int main() {

}   