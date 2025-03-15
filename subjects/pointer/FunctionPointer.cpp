//
// Created by yingbingzhu on 2025/3/15.
//
#include <iostream>
#include <vector>

void PrintValue(int value) {
  std::cout << value << std::endl;
};

void ForEach(const std::vector<int>& values, void (*function)(int)) {
  for (int value : values) {
    function(value);
  }
}

void HelloWorld(int a) {
  std::cout << "Hello World!\n" << a << std::endl;
}

int main() {
  typedef void(*HelloWorldFunction)(int); // declare a function pointer
  HelloWorldFunction function = HelloWorld;

  function(8);

  std::vector<int> values = {1, 2, 3, 4};
  ForEach(values, function);

}

