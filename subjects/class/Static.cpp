//
// Created by yingbingzhu on 2025/2/20.
//
#include <iostream>
class Singleton {
  public:
    static Singleton& Get() {
      static Singleton instance; // extend lifetime
      return instance;
    }

  void Hello() {}
};

static int s_Variable = 10;

int Variable = 10;

int main() {
  Singleton::Get().Hello();
}