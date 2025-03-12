#include <iostream>
#include <memory>


class Entity {
  public:
  Entity() {
    std::cout << "Entity created" << std::endl;
  }

  ~Entity() {
    std::cout << "Entity destroyed" << std::endl;
  }

  void Print() {}
};

int main() {

  {
    // It ensures that the object is deleted when the unique_ptr goes out of scope.
    std::unique_ptr<Entity> entity = std::make_unique<Entity>();

    // std::shared_ptr: A smart pointer that allows multiple shared_ptr instances
    // to share ownership of the same dynamically allocated object.
    // Uses reference counting, so the object is destroyed only when all shared_ptr instances pointing to it go out of scope.
    std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();

    // std::weak_ptr: A weak reference to an object managed by std::shared_ptr.
    // It does not contribute to the reference count and is used to prevent circular references.
    std::weak_ptr<Entity> weakEntity = sharedEntity;
    entity -> Print();
  }
}
