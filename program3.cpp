#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedQueue {
    Node *front, *rear;
public:
    LinkedQueue() : front(nullptr), rear(nullptr) {}
    void enqueue(int val) {
        Node* n = new Node(val);
        if (!rear) { front = rear = n; } 
        else { rear->next = n; rear = n; }
    }
    void dequeue() {
        if (!front) cout << "Queue Underflow\n";
        else {
            cout << "Dequeued: " << front->data << endl;
            Node* temp = front; front = front->next; delete temp;
            if (!front) rear = nullptr;
        }
    }
    void display() {
        Node* curr = front;
        while (curr) { cout << curr->data << " "; curr = curr->next; }
        cout << endl;
    }
};

int main() {
    LinkedQueue q;
    q.enqueue(10); q.enqueue(20); q.enqueue(30); q.display();
    q.dequeue(); q.display();
    return 0;
}
