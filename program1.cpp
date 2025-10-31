
#include <iostream>
using namespace std;
#define MAX 5

class Stack {
    int arr[MAX];
    int top;
public:
    Stack() { top = -1; }
    void push(int val) {
        if (top == MAX - 1) cout << "Stack Overflow\n";
        else arr[++top] = val;
    }
    void pop() {
        if (top == -1) cout << "Stack Underflow\n";
        else cout << "Popped: " << arr[top--] << endl;
    }
    void display() {
        if (top == -1) cout << "Stack is empty\n";
        else for (int i = top; i >= 0; i--) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack st;
    st.push(10); st.push(20); st.push(30); st.display();
    st.pop(); st.display();
    return 0;
}
