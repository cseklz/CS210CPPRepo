#pragma once

class Stack {
public:
    Stack();
    void push(int value);
    int pop();
    [[nodiscard]] int peek() const;
    [[nodiscard]] bool isEmpty() const;
    [[nodiscard]] bool isFull() const;
    [[nodiscard]] int size() const;

private:
    int data[100]{};
    int topIndex;
};
