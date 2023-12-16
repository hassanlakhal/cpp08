#include <iostream>
#include <stack>

int main() {
    // Create a stack of integers using the default container (std::deque)
    std::stack<int> myStack;

    // Push elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // Check if the stack is empty
    if (!myStack.empty()) {
        // Access the top element
        std::cout << "Top element: " << myStack.top() << std::endl;

        // Pop the top element
        myStack.pop();
    }

    // The stack now contains 2 elements (1 and 2)

    return 0;
}
