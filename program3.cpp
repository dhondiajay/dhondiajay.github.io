
#include <iostream>
using namespace std;
#define MAX 5

class CircularQueue {
    int arr[MAX]; int front, rear;
public:
    CircularQueue() : front(-1), rear(-1) {}
    void enqueue(int val) {
        if ((rear + 1) % MAX == front) cout << "Queue Overflow\n";
        else {
            if (front == -1) front = 0;
            rear = (rear + 1) % MAX; arr[rear] = val;
        }
    }
    void dequeue() {
        if (front == -1) cout << "Queue Underflow\n";
        else {
            cout << "Dequeued: " << arr[front] << endl;
            if (front == rear) front = rear = -1;
            else front = (front + 1) % MAX;
        }
    }
    void display() {
        if (front == -1) cout << "Queue is empty\n";
        else {
            int i = front;
            do {
                cout << arr[i] << " ";
                i = (i + 1) % MAX;
            } while (i != (rear + 1) % MAX);
            cout << endl;
        }
    }
};

int main() {
    CircularQueue cq;
    cq.enqueue(10); cq.enqueue(20); cq.enqueue(30); cq.display();
    cq.dequeue(); cq.display();
    return 0;
}
