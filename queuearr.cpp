#include <iostream>
using namespace std;

class Queue{
private:
    int *arr;
    int head;
    int tail;
    int size;

public:
    Queue(){
        size = 0;
        head = tail = NULL;
    }



    Queue(int size) {
        arr = new int [size];
    }

    ~Queue(){
        delete arr;
    }

    void Push(int pushed){
    tail++;
    if (tail == size) tail = 0;
    arr[tail] = pushed;
}

    void Pop(){
    head++;
    if (head == size) head = 0;
}

    int GetSize(){
        return size;
    }

    bool IsEmpty(){
        return (size <= 0);
    }

    int front(){
    return arr[head];
    }

    int back(){
    return arr[tail];
}
};

int main() {
    return 0;
}
