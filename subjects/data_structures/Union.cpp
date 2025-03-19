//
// Created by yingbingzhu on 2025/3/18.
//

#include <iostream>

// multiple variables to share the same memory space
// and only one member can be used at a time.
union Data {
  int i;
  float f;
  char c;
};

int main() {
  Data d;

  d.i = 10;
  std::cout << "d.i = " << d.i << std::endl;

  d.f = 3.14;
  std::cout << "d.f = " << d.f << std::endl;  // d.i is now overwritten

  d.c = 'A';
  std::cout << "d.c = " << d.c << std::endl;  // d.f is now overwritten

  return 0;
}
