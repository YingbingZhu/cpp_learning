//
// Created by yingbingzhu on 2025/2/25.
//

#include <iostream>
#include <string>

class Entity {
  public:
    virtual std::string GetName() { return "Entity"; }
};

class Player : public Entity {
  private:
    std::string m_Name;
  public:
    Player(std::string& name)
      : m_Name(name) {}
    std::string GetName() override { return m_Name; }
};