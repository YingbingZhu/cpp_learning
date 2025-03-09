//
// Created by yingbingzhu on 2025/3/6.
//
#include <iostream>
#include <string>
#include <cuchar>

int main() {
  const char* s = "Hello World"; // Pointer to a constant C-string
  std::string result = "Hello World";
  std::string name = std::string("test") + "test"; // Concatenating std::string
  bool contains = name.find("no") == std::string::npos; // Checks if "no" exists

  char name1[3] = {'C', 'A', 0};
  std::cout << "Length of name1: " << strlen(name1) << std::endl;

  // Wide character strings (require special handling)
  const wchar_t* ws = L"Hello World"; // Wide char
  const char16_t* name2 = u"Hello World"; // UTF-16
  const char32_t* name3 = U"Hello World"; // UTF-32

  // Wide char printing (platform-dependent)
  std::wcout << L"ws: " << ws << std::endl; // Works for wchar_t
  // Cannot directly print char16_t and char32_t without conversion

  return 0;
}