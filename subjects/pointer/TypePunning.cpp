//
// Created by yingbingzhu on 2025/3/18.
//

#include <iostream>
struct Entity {
  int x, y;
};

int main() {
  int a = 50;
  // Reinterpreting an int's memory as a double.
  double& value = *(double*)&a;
  Entity e = {5, 8};
  // Reinterpreting an Entity's memory as an array of ints.
  int* position = (int*)&e;

  std::cout << position[0] << std::endl;
}