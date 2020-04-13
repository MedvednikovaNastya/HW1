#include <iostream>
using namespace std;

class Queue {
private:
    class Node {
       public:
            int value;
            Node *prev, *next;

            Node(int value) {
                this->value = value;
                prev = next = nullptr;
            }

    };
    int size;
    Node *head, *tail;

public:
    Queue() {
        size = 0;
        head = tail = NULL;
    }
    ~Queue() {
    }
    void push(int value) {
        if(size > 0) {
            tail->next = new Node(value);
            tail = tail->next;
        } else {
            tail = head = new Node(value);
        }
        size++;
    }
    void pop() {
        if (size > 1) head = head->next;
            else if (size == 1) head = tail = NULL;
        if(size > 0) size--;
    }
    int getSize() {
        return size;
    }
    int isEmpty() {
        return (size <= 0);
    }
    int front() {
        try {
            return head->value;
        } catch( exception e) {
            return NULL;
        }
    }
    int back() {
        try {
            return tail->value;
        } catch (exception e) {
            return NULL;
        }
    }
};


int main() {
    return 0;
}
