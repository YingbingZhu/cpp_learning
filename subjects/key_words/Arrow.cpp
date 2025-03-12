//
// Created by yingbingzhu on 2025/3/11.
//
#include <iostream>

class Entity {
 public:
   int x;
public:
  void Print() const {
    std::cout << "Hi" << std::endl;
  }
};

class ScopePtr{
  private:
    Entity* m_Obj;
  public:
    // implicit conversion constructor
    ScopePtr(Entity* ptr)
    : m_Obj(ptr){
    }

    ~ScopePtr(){
      delete m_Obj;
    }

    Entity* GetObject() const {
      return m_Obj;
    }

    // Overloaded operator-> to allow direct access to Entity methods
    Entity* operator->() const {
      return m_Obj;
    }
};

int main() {
  Entity e;
  e.Print();

  Entity* ptr = &e;
  Entity& entity = *ptr;
  (*ptr).Print(); // dereferencing a pointer to access the object it points to.
  ptr -> Print(); // Equivalent shortcut using the arrow operator
  ptr -> x = 2;


  ScopePtr entity1 = new Entity(); // ScopePtr entity1(new Entity());
  entity1 -> Print();


}
