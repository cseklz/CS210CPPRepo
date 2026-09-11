#include "Stack.h"

#include <iostream>

Stack::Stack() {
	topIndex = -1;
}

void Stack::push(int value) {
	if (topIndex == 99) {
		std::cout << "Stack is full" << std::endl;
	}

	data[++topIndex] = value;
}

int Stack::pop() {
	if (topIndex == -1) {
		std::cout << "Stack is empty: ";
		return -1;
	}

	return data[topIndex--];
}

int Stack::peek() const {
	if (topIndex == -1) {
		std::cout << "Stack is empty: ";
		return -1;
	}

	return data[topIndex];
}

bool Stack::isEmpty() const {
	return topIndex == -1;
}

bool Stack::isFull() const {
	return topIndex == 99;
}

int Stack::size() const {
	return topIndex + 1;
}