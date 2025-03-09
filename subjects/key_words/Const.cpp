//
// Created by yingbingzhu on 2025/3/8.
//

#include <iostream>
#include <string>
class Entity {
  private:
    int m_X, m_Y;
    // int* m_X, *m_Y;
    mutable int var;
   public:
     int GetX() const
     {
       var = 2; // mutable
       return m_X;
     } // read-only
     int GetX() { return m_X; }
     void SetX(int X) { m_X = X; }
};

int main() {
  const int MAX_AGE = 99;

  int* const age = new int;
  *age = 10; // allow changing the value
  // age = new int; can't change pointer

  const int* age2 = new int;
  age2 = new int;  // allow changing the pointer
  // *age2 = new int; // can't change value

  //

}