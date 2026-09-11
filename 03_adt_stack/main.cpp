#include <iostream>
#include "Stack.h"

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Stack size: " << s.size() << std::endl;
    std::cout << "Top: " << s.top() << std::endl;

    s.pop();
    std::cout << "After pop, top: " << s.top() << std::endl;
    std::cout << "Is empty? " << (s.isEmpty() ? "yes" : "no") << std::endl;

    return 0;
}