//
// Created by yingbingzhu on 2025/3/11.
//

#include <stdio.h>

class Entity;
void PrintEntity(Entity* e);


class Entity {
public:
  int x, y;
  Entity(int x, int y) {
    this->x = x;
    this->y = y;

    PrintEntity(this);
  }

  int GetX() const {
    return this->x;
  }
};


void PrintEntity(Entity* e) {
  if (e) {
    printf("Entity at (%d, %d)\n", e->x, e->y);
  }
};

int main() {
  Entity e(10, 20);
  PrintEntity(&e);
}