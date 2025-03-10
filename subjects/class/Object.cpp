//
// Created by yingbingzhu on 2025/3/10.
//
#include <iostream>
#include <string>

using String = std::string;

class Entity {
  private:
    String m_Name;
  public:
    Entity(): m_Name("Unknown") {}
    Entity(const String& name) : m_Name(name) {}

    const String& GetName() const { return m_Name; }
};

int main() {
  Entity* e;
  {
    Entity entity("Test");
    e = &entity; // e points to entity
    std::cout << entity.GetName() << std::endl;
  } // entity is creased on the stack, when block end, entity is destroyed

  Entity entity1 = Entity();
  Entity entity2 = Entity("T");
  std::cout << entity2.GetName() << std::endl;
}