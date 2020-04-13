#include <iostream>

using namespace std;

class Queue{
private:
    int size;
    int *arr;

public:
    Queue() {
        size = 0;
        arr = new int;
        }

    ~Queue() {}

    void Push(int pushed){
    arr[size] = pushed;
    size++;
}
    void Pop(){
    for(int i = 0; i < size; i++) {
            arr[i] = arr[i+1];
    }
    size--;
}

    int GetSize(){
        return size;
    }

    bool IsEmpty(){
        return (size <= 0);
    }

    int front(){
    return arr[0];
    }

    int back(){
    return arr[size-1];
}
};

int main() {
    return 0;
}
