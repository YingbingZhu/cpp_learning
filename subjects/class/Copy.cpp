//
// Created by yingbingzhu on 2025/3/11.
//

#include <iostream>
#include <string>

class String {
private:
  char* m_Buffer;
  unsigned int m_Size;
public:
  String(const char* string) {
    m_Size = strlen(string);
    m_Buffer = new char[m_Size + 1];
    memcpy(m_Buffer, string, m_Size);
    m_Buffer[m_Size] = '\0'; // C-strings must end with a null terminator (
  };

  ~String() {
    delete[] m_Buffer; // because we declare new
  }

  // deep copy
  String(const String& other)
    : m_Size(other.m_Size){
    m_Buffer = new char[m_Size + 1];
    memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
  }

  // It allows direct access to characters in the string buffer.
  char& operator[](int index) {
    return m_Buffer[index];
  }

  friend std::ostream& operator<<(std::ostream& stream, const String& string);
//  const char* GetBuffer() const {
//    return this->m_Buffer;
//  }
};

// Implementation of operator<<, Prints object to an output stream
std::ostream& operator<<(std::ostream& stream, const String& string) {
  stream << string.m_Buffer;
  return stream;
}

int main() {
  String string = "Hello World!";
  // String second =  string; // copy the pointer, shallow copy
  String second = string;
  second[2] = 'a';
  std::cout << string << std::endl;
  std::cout << second << std::endl;
  std::cin.get();
}
