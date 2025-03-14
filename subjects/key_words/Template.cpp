//
// Created by yingbingzhu on 2025/3/14.
//
#include <iostream>
#include <string>

template <typename T> // evaluate at compile time
void Print(T value)
{
  std::cout << value << " ";
}

template <typename T, int N>
class Array {
private:
  T m_Array[N];
public:
  static int GetSize() { return N; }
};

int main() {
  Print(1);
  Print(2.2f);
  Print<int>(3);
  Print<std::string>("3");
  Print("Hi");
}