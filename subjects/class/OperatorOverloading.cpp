//
// Created by yingbingzhu on 2025/3/10.
//

#include <stdio.h>

struct Vector2
{
  float x, y;
  Vector2(float x, float y): x(x), y(y) {}

  Vector2 Add(const Vector2& other) const {
    return operator+(other);
  }

  Vector2 operator+(const Vector2& other) const {
    return Vector2(x + other.x, y + other.y);
  }

  bool operator==(const Vector2& other) const {
    return x == other.x && y == other.y;
  }
};

int main() {
  Vector2 position(4.0f, 4.0f);
  Vector2 speed(0.5f, 1.5f);

  Vector2 result1 = position.Add(speed);
  Vector2 result2 = position + speed;
  if (result1 == result2) {
    printf("Results are the same\n");
  }
}

