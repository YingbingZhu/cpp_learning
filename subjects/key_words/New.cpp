//
// Created by yingbingzhu on 2025/3/10.
//

#include <iostream>
#include <string>


int main() {
  int a = 2;
  int* c = new int;
  int* b = new int[50]; // dynamically allocate memory for an int on the heap
   // int* c = (int*)malloc(sizeof(int)); //
  delete [] b;
  delete c;

}