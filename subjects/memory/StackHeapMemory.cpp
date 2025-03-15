//
// Created by yingbingzhu on 2025/3/14.
//
#include <iostream>
#include <string>

int main() {
  int value = 5; // stack allocation, directly accessible, automatically managed
  int array[5];

  int* hvalue = new int; // heap allocation, dynamic allocation with pointers
  int* harray = new int[5];
  *hvalue = 5;
}