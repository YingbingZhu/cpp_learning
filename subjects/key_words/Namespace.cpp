//
// Created by yingbingzhu on 2025/3/15.
//
#include <iostream>

namespace A {
  void Print() {
    std::cout << "Hello World!\n" << std::endl;
  }
};

namespace B {
void Print() {
  std::cout << "Hello World!\n" << std::endl;
}
}

int main() {
  B::Print();
  namespace a = A;
  a::Print();

  using namespace A; // declare in intended scope
  Print();
}