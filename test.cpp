#include <deque>
#include <iterator>
#include<vector>
#include<iostream>
    #include <list>
int main()
{
std::vector<int> myList;
myList.push_back(1);
myList.push_back(2);
myList.push_back(3);
myList.push_back(4);
std::vector<int>::iterator it = myList.begin();
it[1];
if (it != myList.end()) { // Check if not at end
  std::cout << *it << " "; // Print first element
  ++it; // Move to next element
  while (it != myList.end()) { // Loop through remaining elements
    if (*it % 2 == 0) { // Check if even
      std::cout << *it << " ";
    }
    ++it;
  }
}
std::cout << std::endl;
}


