//
// Created by yingbingzhu on 2025/3/19.
//

#include <iostream>

class Base {
  public:
  Base() {std::cout << "Base Constrcutor" << std::endl;}
  virtual ~Base() {std::cout << "Base Destructor" << std::endl;}
};

class Derived : public Base {
  public:
  Derived() {std::cout << "Derived Constrcutor" << std::endl;}
  ~Derived() {std::cout << "Derived Destructor" << std::endl;}
};

class Another : public Base {
  public:
    Another() {std::cout << "Another Constrcutor" << std::endl;}
    ~Another() {std::cout << "Another Destructor" << std::endl;}
};

int main() {
  double value = 5.25;
  // ----- C-style cast -----
  // This cast is less explicit and may perform several conversions at once.
  double a = (int)value + 5.3;

  // ----- C++ style cast: static_cast -----
  // static_cast is more explicit and is checked at compile time.
  // It is suitable for well-defined conversions like numeric type conversion.
  double s = static_cast<int>(a);

  // ----- C++ style cast: dynamic_cast -----
   Base* basePtr = new Derived;

  // dynamic_cast safely converts a Base* to a Derived* at runtime.
  // It returns a valid pointer if the conversion is correct, or nullptr if it fails.
  Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
  if (derivedPtr) {
    std::cout << "Successfully cast Base* to Derived* using dynamic_cast." << std::endl;
  } else {
    std::cout << "dynamic_cast failed." << std::endl;
  }

  delete basePtr;

  return 0;

}
