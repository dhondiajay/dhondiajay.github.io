#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedStack {
    Node* top;
public:
    LinkedStack() : top(nullptr) {}
    void push(int val) {
        Node* n = new Node(val);
        n->next = top; top = n;
    }
    void pop() {
        if (!top) cout << "Stack Underflow\n";
        else {
            cout << "Popped: " << top->data << endl;
            Node* temp = top; top = top->next; delete temp;
        }
    }
    void display() {
        Node* curr = top;
        while (curr) { cout << curr->data << " "; curr = curr->next; }
        cout << endl;
    }
};

int main() {
    LinkedStack st;
    st.push(10); st.push(20); st.display();
    st.pop(); st.display();
    return 0;
}
