//
// Created by yingbingzhu on 2025/3/15.
//
#include <iostream>
#include <vector>
#include <functional> // Needed for std::function

void ForEach(const std::vector<int>& values, const std::function<void(int)>& function) {
  for (int value : values) {
    function(value);
  }
};

int main() {
  std::vector<int> values = {1, 2, 3, 4, 5};
  auto it = std::find_if(values.begin(), values.end(), [](int value) { return value == 2; });
  std::cout << *it << std::endl;

  int a = 5;

  // Lambda with a capture list: [a],  makes a available inside the lambda.
  auto lambda = [a](int value) {std::cout << value << " " << a << std::endl;};
  ForEach(values, lambda);
}


