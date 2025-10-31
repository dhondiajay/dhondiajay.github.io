#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
    Node* head;
public:
    LinkedList() : head(nullptr) {}
    void insert(int val) {
        Node* n = new Node(val);
        if (!head) head = n;
        else {
            Node* curr = head;
            while (curr->next) curr = curr->next;
            curr->next = n;
        }
    }
    void display() {
        Node* curr = head;
        while (curr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;
    ll.insert(10); ll.insert(20); ll.insert(30); ll.display();
    return 0;
}
