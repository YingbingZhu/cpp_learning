//
// Created by yingbingzhu on 2025/3/14.
//
#include <iostream>

#ifdef DEBUG_MODE
  #define LOG(x) std::cout << x << std::endl
#elif defined(RELEASE_MODE)
  #define LOG(x)
#else
  #define LOG(x) // Fallback if no mode is defined
#endif

int main() {
  LOG("Hello World!"); // Macro can control mode
  return 0;
}