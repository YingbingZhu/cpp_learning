//
// Created by yingbingzhu on 2025/3/14.
//
#include <iostream>
#include <array>

void PrintArray(const std::array<int, 10>& arr) {
  for (int i = 0; i < arr.size(); i++) {
    std::cout << arr[i] << " ";
  }

}
int main() {
  std::array<int, 10> data;
  data[0] = 2;
  PrintArray(data);

}