#include "Stack.h"

#include <iostream>
#include <string_view>

int main()
{
    Stack stack;

    std::cout << std::boolalpha;

    // Checks how the stack is initialized
    std::cout << stack.isEmpty() << std::endl;
    std::cout << !stack.isFull() << std::endl;
    std::cout << (stack.size() == 0) << std::endl;
    std::cout << '\n';

    stack.push(42);

    // Checks what happens when we push an element
    std::cout << !stack.isEmpty() << std::endl;
    std::cout << (stack.size() == 1) << std::endl;
    std::cout << (stack.peek() == 42) << std::endl;
    std::cout << (stack.size() == 1) << std::endl;
    std::cout << '\n';

    stack.push(10);
    stack.push(20);
    stack.push(30);

    // Check what happens when we pop elements and if we are popping the right ones
    std::cout << (stack.pop() == 30) << std::endl;
    std::cout << (stack.pop() == 20) << std::endl;
    std::cout << (stack.pop() == 10) << std::endl;
    std::cout << (stack.pop() == 42) << std::endl;
    std::cout << stack.isEmpty() << std::endl;
    std::cout << (stack.size() == 0) << std::endl;
    std::cout << '\n';

    for (int value = 0; value < 100; ++value) {
        stack.push(value);
    }

    // Check what happens when we push 100 elements and if the stack is full
    std::cout << stack.isFull() << std::endl;
    std::cout << !stack.isEmpty() << std::endl;
    std::cout << (stack.size() == 100) << std::endl;
    std::cout << (stack.peek() == 99) << std::endl;
    std::cout << '\n';

    bool correctOrder = true;
    for (int expected = 99; expected >= 0; --expected) {
        if (stack.pop() != expected) {
            correctOrder = false;
        }
    }

    // Check what happens when we pop 100 elements and if the stack is empty
    std::cout << correctOrder << std::endl;
    std::cout << stack.isEmpty() << std::endl;
    std::cout << !stack.isFull() << std::endl;
    std::cout << (stack.size() == 0) << std::endl;
    std::cout << '\n';

    stack.push(5);
    stack.push(6);
    const int removed = stack.pop();
    stack.push(7);

    // Check what happens when we pop an element and if the stack is not empty
    std::cout << (removed == 6) << std::endl;
    std::cout << (stack.peek() == 7) << std::endl;
    std::cout << (stack.size() == 2) << std::endl;
    std::cout << '\n';

    return 0;
}
