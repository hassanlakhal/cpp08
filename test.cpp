#include <deque>
#include <iterator>
#include<vector>
#include<iostream>
    #include <list>
#include <iostream>
#include <deque>

int main() {
    std::deque<int> myVector;
    std::deque<int>::difference_type it;
    
    // Add some elements to the vector
    for (int i = 0; i < 35; ++i) {
        myVector.push_back(i);
        std::cout << "Size: " << myVector.size() << ", Capacity: " << myVector.capacity() << std::endl;
    }

    return 0;
}



