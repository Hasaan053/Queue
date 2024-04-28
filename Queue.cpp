#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the queue

class Queue {
private:
    int front, rear;          // Index of front and rear elements
    int arr[MAX_SIZE];        // Array to store queue elements

public:
    // Constructor
    Queue() : front(-1), rear(-1) {}

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == -1 && rear == -1;
    }

    // Function to check if the queue is full
    bool isFull() {
        return (rear + 1) % MAX_SIZE == front;
    }

    // Function to enqueue an element into the queue
    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % MAX_SIZE;
        }
        arr[rear] = x;
        cout << x << " enqueued to queue\n";
    }

    // Function to dequeue an element from the queue
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return -1;
        }
        int dequeued = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
        cout << dequeued << " dequeued from queue\n";
        return dequeued;
    }

    // Function to return the front element of the queue
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }
};

int main() {
    Queue queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    cout << "Front element: " << queue.peek() << endl;

    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue(); // This will demonstrate queue underflow

    return 0;
}
