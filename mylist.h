#pragma once
#include "list.h"

template<class T>
class mylist : public list<T> {
public:
    mylist(int size = 10) : list<T>(size) {}
    mylist(const mylist& obj) : list<T>(obj) {}

    bool full() {
        return this->currentSize == this->maxSize;
    }

    bool empty() {
        return this->currentSize == 0;
    }

    void addElementAtFirstIndex(T value) override {
        if (full()) {
            cout << "The list is full\n";
            return;
        }

        for (int i = this->currentSize; i > 0; i--) {
            this->arr[i] = this->arr[i - 1];
        }

        this->arr[0] = value;
        this->currentSize++;
    }

    void addElementAtLastIndex(T value) override {
        if (full()) {
            cout << "The list is full\n";
            return;
        }

        this->arr[this->currentSize++] = value;
    }

    T removeElementFromEnd() override {
        if (empty()) {
            cout << "List is empty\n";
            return T();
        }

        return this->arr[--this->currentSize];
    }

    void removeElementFromStart() override {
        if (empty()) {
            cout << "List is empty!\n";
            return;
        }

        for (int i = 0; i < this->currentSize - 1; i++)
            this->arr[i] = this->arr[i + 1];

        this->currentSize--;
    }

    int size() {
        return this->currentSize;
    }

    bool insertAt(int index, T value) {
        if (index < 0 || index > this->currentSize || full())
            return false;

        for (int i = this->currentSize; i > index; i--) {
            this->arr[i] = this->arr[i - 1];
        }

        this->arr[index] = value;
        this->currentSize++;
        return true;
    }

    bool search(T value) {
        for (int i = 0; i < this->currentSize; i++)
            if (this->arr[i] == value)
                return true;

        return false;
    }

    void display() {
        for (int i = 0; i < this->currentSize; i++)
            cout << this->arr[i] << " ";
        cout << endl;
    }
};

