//
// Created by yingbingzhu on 2025/3/1.
//
#include <iostream>

void arrayDemo() {
  int example[5];
  example[0] = 1;
  std::cout << "Array value at index 0: " << example[0] << std::endl;
  // std::cin.get(); // Removed from function for modularity
  for (int i = 1; i < 5; i++) {

  }
}

int main() {
  std::cout << "Testing Arrays:\n";
  arrayDemo();
  std::cin.get(); // Pause to view output
  return 0;
}