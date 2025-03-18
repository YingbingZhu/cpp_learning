//
// Created by yingbingzhu on 2025/3/18.
//
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
  std::vector<int> v = {3, 5, 1};
  std::sort(v.begin(), v.end());

  std::sort(v.begin(), v.end(), std::greater<int>()); // decreasing
  std::sort(v.begin(), v.end(), [](int a, int b) {
    return a > b;
  });

  for (int value : v) {
    std::cout << value << " ";
  }

}