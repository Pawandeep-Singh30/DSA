//PAWANDEEP SINGH A/L BALWINDER SINGH
//22011772

#include <iostream>
using namespace std;

const int MAX = 100; 

class Queue {
private:
    string arr[MAX];
    int front;
    int rear;
    int count;

public:
    Queue() {
        front = 0;
        rear = -1;
        count = 0;
    }

    void enqueue(string name) {
        if (isFull()) {
            cout << "Queue is Full.\n";
            return;
        }

        rear = (rear + 1) % MAX;
        arr[rear] = name;
        count++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty.\n";
            return;
        }

        cout << arr[front] << endl;
        front = (front + 1) % MAX;
        count--;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == MAX;
    }

    void display_queue() {
        if (isEmpty()) {
            cout << "Queue is Empty.\n";
            return;
        }

        cout << "Queue: ";
        for (int i = 0; i < count; i++) {
            int index = (front + i) % MAX;
            cout << arr[index] << " -> ";
        }
        cout << "NULL\n";
    }
};

int main() {
    Queue queue;

    queue.enqueue("Ali");
    queue.enqueue("Alice");
    queue.enqueue("Ahmed");
    queue.enqueue("Hamza");
    queue.enqueue("Sara");

    queue.display_queue();

    cout << "Dequeue: ";
    queue.dequeue();

    queue.display_queue();

    return 0;
}
