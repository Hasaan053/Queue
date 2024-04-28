# Queue Implementation:

By understanding and implementing basic data structures like queues, developers can build efficient and robust software systems for various applications.

/*
#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the queue
*/

This code includes the necessary header files and defines a constant "MAX_SIZE" to represent the maximum capacity of the queue.

/*
class Queue {
private:
    int front, rear;          // Index of front and rear elements
    int arr[MAX_SIZE];        // Array to store queue elements

*/

Here, we define a "Queue" class with private member variables "front" and "rear" to keep track of the front and rear elements of the queue, respectively. The array "arr" is used to store the elements of the queue.

/*
public:
    // Constructor
    Queue() : front(-1), rear(-1) {}

*/

This is the constructor of the "Queue" class, which initializes "front" and "rear" to -1, indicating an empty queue.

/*
    // Function to check if the queue is empty
    bool isEmpty() {
        return front == -1 && rear == -1;
    }

*/

The "isEmpty" function checks if the queue is empty by verifying if both "front" and "rear" are -1.

/*
    // Function to check if the queue is full
    bool isFull() {
        return (rear + 1) % MAX_SIZE == front;
    }
*/

The "isFull" function checks if the queue is full by ensuring that the next position after "rear" is equal to "front" in a circular manner.

/*
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
*/

The "enqueue" function adds an element x to the rear of the queue. It first checks if the queue is full using the "isFull" function. If not, it updates the "rear" pointer accordingly and adds the element to the "arr".

/*
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
*/

The "dequeue" function removes and returns the element at the front of the queue. It first checks if the queue is empty using the "isEmpty" function. If not, it removes the element at the front and updates the "front" pointer accordingly.

/*

    // Function to return the front element of the queue
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }
*/

The "peek" function returns the element at the front of the queue without removing it. It first checks if the queue is empty using the "isEmpty" function.

/*
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
*/

In the "main" function, we create a "Queue" object and perform enqueue and dequeue operations to demonstrate the functionality of the queue.

Purpose and Use Cases:

A queue is a fundamental data structure that follows the First-In-First-Out (FIFO) principle. It is commonly used in scenarios where items need to be processed in the order they were added. Some common use cases of queues include:

Job scheduling:
Queues are used to manage tasks or jobs in various systems such as operating systems, web servers, and network routers. Jobs are placed in the queue and processed in the order they arrive.

Breadth-First Search (BFS):

Queues are essential for implementing BFS algorithm in graph traversal. Nodes are visited in the order they are discovered, ensuring that nodes closer to the starting point are visited first.

Printer spooling:

Print jobs sent to a printer are placed in a queue, ensuring that they are printed in the order they were received.

Buffering:

Queues are used in networking and communication systems for buffering data packets. Incoming data packets are stored in a queue until they can be processed.

Call center systems:

Queues are used to manage incoming calls in call center systems. Calls are placed in a queue and handled by agents in the order they were received.

