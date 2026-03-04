#pragma once
#include <iostream>
using namespace std;

template<class T>
class list {
protected:
    T* arr;
    int maxSize;
    int currentSize;

public:
    list(int size = 10) {
        maxSize = size;
        currentSize = 0;
        arr = new T[maxSize];
    }

    list(const list& obj) {
        maxSize = obj.maxSize;
        currentSize = obj.currentSize;
        arr = new T[maxSize];
        for (int i = 0; i < currentSize; i++) {
            arr[i] = obj.arr[i];
        }
    }

    virtual ~list() {
        delete[] arr;
    }

    virtual void addElementAtFirstIndex(T) = 0;
    virtual void addElementAtLastIndex(T) = 0;
    virtual T removeElementFromEnd() = 0;
    virtual void removeElementFromStart() = 0;
};

