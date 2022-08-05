#include "iostream"
#include "vector"
#include "string"
#include "stack"
using namespace std;

class MyCircularQueue {
private:
    int front;
    int rear;
    int capacity;
    vector<int> elements;

public:
    MyCircularQueue(int k) {
        this->capacity = k + 1;
        this->elements = vector<int>(capacity);
        rear = front = 0;
    }

    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }
        elements[rear] = value;
        rear = (rear + 1) % capacity;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) {
            return false;
        }
        front = (front + 1) % capacity;
        return true;
    }

    int Front() {
        if (isEmpty()) {
            return -1;
        }
        return elements[front];
    }

    int Rear() {
        if (isEmpty()) {
            return -1;
        }
        return elements[(rear - 1 + capacity) % capacity];
    }

    bool isEmpty() {
        return rear == front;
    }

    bool isFull() {
        return ((rear + 1) % capacity) == front;
    }
};


int main(){
    MyCircularQueue circularQueue = *new MyCircularQueue(3); // 设置长度为 3
    cout<<circularQueue.enQueue(1)<<endl; // 返回 true
    cout<<circularQueue.enQueue(2)<<endl; // 返回 true
    cout<<circularQueue.enQueue(3)<<endl; // 返回 true
    cout<<circularQueue.enQueue(4)<<endl; // 返回 false，队列已满;
    cout<<circularQueue.Rear()<<endl; // 返回 3
    cout<<circularQueue.isFull()<<endl; // 返回 true
    cout<<circularQueue.deQueue()<<endl; // 返回 true
    cout<<circularQueue.enQueue(4)<<endl; // 返回 true
    cout<<circularQueue.Rear()<<endl; // 返回 4
    return 0;
}