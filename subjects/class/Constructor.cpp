//
// Created by yingbingzhu on 2025/2/24.
//

#include <iostream>
#include <ostream>
class Entity {
  public:
    float X, Y;
    Entity() {
      X = 0.0f;
      Y = 0.0f;
    }

  Entity(const float X, const float Y) {
      this->X = X;
      this->Y = Y;
    }

  ~Entity() {
      std::cout << "Destroying Entity" << std::endl;
    }
};
