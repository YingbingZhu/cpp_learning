#include <iostream>
#include "Log.h"

void Increment(int* value) {
  (*value)++; // dereference the pointer and access the value stored
}

void Increment(int& value) {
  value++;  // reference
}

int main() {
  int var = 5;
  Increment(&var);
  std::cout << var << std::endl;
  Increment(var);
  std::cout << var << std::endl;
  // void* ptr = &var; // Storing the address of an int variable in a void pointer
  int* ptr2 = &var;
  *ptr2 = 10;
  std::cout << var << std::endl;

  char* buffer = new char[8];
  memset(buffer, 0, 8);
  char** ptr = &buffer;
  delete[] buffer;


  // int x = 5;
  // for (int i = 0; i < 3; i++) {
  //   std::cout << x << std::endl;
  // }

  // Log("Hello World!");
  // std::cin.get();
  // unsigned int variable = 8;
  //
  // std::cout << variable << std::endl;

  // return 0;
}