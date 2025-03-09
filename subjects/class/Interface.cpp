//
// Created by yingbingzhu on 2025/2/25.
//

#include <iostream>
#include <string>
class Printable
{
  public:
    virtual std::string GetClassName() = 0;
};

class Entity : public Printable
{
  public:
    virtual std::string GetName() { return "Entity"; }
    std::string GetClassName() override { return "Entity"; }
};

class Player : public Entity
{
  private:
    std::string m_Name;
  public:
    Player(std::string& name)
      : m_Name(name) {}
  std::string GetName() override { return m_Name; }
};

void Print(Printable* obj) {
  std::cout << obj->GetClassName() << std::endl;
}