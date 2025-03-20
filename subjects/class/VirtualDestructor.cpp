//
// Created by yingbingzhu on 2025/3/19.
//

#include <iostream>

class Base {
  public:
    Base() {std::cout << "Base Constrcutor" << std::endl;}
    virtual ~Base() {std::cout << "Base Destructor" << std::endl;} // always use virtual for base class
};

class Derived : public Base {
  public:
    Derived() {std::cout << "Derived Constrcutor" << std::endl;}
    ~Derived() {std::cout << "Derived Destructor" << std::endl;}
};

int main() {
  Base* base  = new Base();
  delete base;
  std::cout << "--------------\n";

  Derived* derived = new Derived();
  delete derived;
  std::cout << "--------------\n";

  Base* base2 = new Derived(); // will call the Destructor of Derived first
}