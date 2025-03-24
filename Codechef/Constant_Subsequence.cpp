#include <bits/stdc++.h>
using namespace std;

class Stack {
public:
    int arr[1000];
    int top = -1;

    void push(int val) {
        arr[++top] = val;
    }

    int pop() {
        if (top == -1) return -1;
        return arr[top--];
    }

    bool isEmpty() {
        return top == -1;
    }
};

class Queue {
public:
    int arr[1000];
    int front = 0;
    int rear = 0;

    void enqueue(int val) {
        arr[rear++] = val;
    }

    int dequeue() {
        if (front == rear) return -1;
        return arr[front++];
    }

    bool isEmpty() {
        return front == rear;
    }
};

int main() {
    int N, M;
    cin >> N >> M;

    Stack stack;
    Queue queue;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        stack.push(x);
    }

    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;
        queue.enqueue(x);
    }

    if (N != M) {
        cout << "NO" << endl;
        return 0;
    }

    while (!stack.isEmpty() && !queue.isEmpty()) {
        if (stack.pop() != queue.dequeue()) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

}