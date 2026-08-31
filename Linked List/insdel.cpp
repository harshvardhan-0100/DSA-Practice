#include <bits/stdc++.h>
using namespace std; 

struct Node {
    public: 
    int data; 
    Node* next; 
    public: 
    Node (int data1, Node* next1) {
        data = data1; 
        next = next1; 
    }
    Node (int data1) {
        data = data1; 
        next = nullptr; 
    }
};

Node* arraytoll(vector<int> arr) {
    Node* head = new Node(arr[0]); 
    Node* mover = head; 
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]); 
        mover->next = temp; 
        mover = temp; 
    }
    return head; 
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;  
    } 
    cout << endl;
}

// delete the head
Node* removesHead(Node* head) {
    if (head == nullptr) return head;
    Node* temp = head; 
    head = head->next; 
    delete temp; 
    return head;
}

Node* deleteTail(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return nullptr; // since there is only one element which is both head & tail or no ele at all!
    }
    // in all other cases there will be minimum of two elements, so deletion of tail is possible
    Node* temp = head; 

    while (temp->next->next != nullptr) {
        temp = temp->next; 
    }
    delete temp->next; 
    temp->next = nullptr; 

    return head; 
}


// delete kth element of a linked list
// if length of LL is less than k, don't delete anything.
// if k = 1; delete the head, simple case
// if k = lengthofLL(); delete the tail, simple case again
// if k > lengthofLL(); return head simply with no change
// if 1 < k > lengthofLL(); then: 

Node* deleteK(Node* head, int k) {
    if (head == nullptr) return head; // basic edge case

    if (k == 1) {
        Node* temp = head; 
        head = head->next;
        delete temp; 
        return head; 
    } // second edge case (basically deleting the head)

    int cnt = 0; 
    Node* temp = head; 
    Node* prev = nullptr; 
    while (temp != nullptr) {
        cnt++; 
        if (cnt == k) {
            prev->next = prev->next->next; 
            delete temp; 
            break; 
        }
        prev = temp; 
        temp = temp->next; 
    }
    return head; 
}

Node* deleteK(Node* head, int k) {
    if (head == nullptr) return head; // basic edge case

    if (k == 1) {
        Node* temp = head; 
        head = head->next;
        delete temp; 
        return head; 
    } // second edge case (basically deleting the head)

    int cnt = 0; 
    Node* temp = head; 
    Node* prev = nullptr; 
    while (temp != nullptr) {
        cnt++; 
        if (cnt == k) {
            prev->next = prev->next->next; 
            delete temp; 
            break; 
        }
        prev = temp; 
        temp = temp->next; 
    }
    return head; 
}

int main() {
    vector<int> nums = {12, 44, 87, 136, 299}; 
    Node* head = arraytoll(nums); 
     
    print(head); 
    head = deleteK(head, 7); 
    print(head); 
}