//
// Created by yingbingzhu on 2025/3/11.
//
#include <iostream>

class Entity {
  public:
  Entity() {
    std::cout << "Entity created" << std::endl;
  }

  ~Entity() {
    std::cout << "Entity destroyed" << std::endl;
  }

};

int* CreateArray() {
  // int array[10]; // wrong, stack based
  int* array = new int[50];
  return array;
}


int main() {

  // heap based
  {
    // heap based
    Entity* e = new Entity(); // dynamically allocates memory for an Entity object on the heap.
    // stack
    Entity e1;
  }
  std::cin.get();

}