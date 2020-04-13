#include <iostream>

using namespace std;

class Queue{
private:
    int *arr;
    int head;
    int tail;

public:
    int size;
    Queue(int size);
    ~Queue();
    void Push();
    void Pop();
    int GetSize();
    bool IsEmpty();
    int front();
    int back();
};
    Queue(size) {
        arr = new int [size];
        head = tail = 0;
    }

    ~Queue(){
        delete arr;
    }

    void Queue::Push(int pushed){
    tail++;
    if (tail == size) tail = 0;
    arr[tail] = pushed;
}

    void Queue::Pop(){
    head++;
    if (head == size) head = 0;
}

    int Queue::GetSize(){
        return size;
    }

    bool Queue::IsEmpty(){
        return (size <= 0);
    }

    int Queue::front(){
    return arr[head];
    }

    int Queue::back(){
    return arr[tail];
}

int main() {
    return 0;
}
