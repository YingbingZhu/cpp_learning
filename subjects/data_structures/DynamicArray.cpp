//
// Created by yingbingzhu on 2025/3/12.
//
#include <iostream>
#include <vector>

struct Vertex {
  float x, y, z;

  Vertex(float x, float y, float z) : x(x), y(y), z(z) {}

  Vertex(const Vertex &other) : x(other.x), y(other.y), z(other.z) {
    std::cout << "Vertex copy constructor" << std::endl;
  }
};

std::ostream& operator<<(std::ostream& os, const Vertex& v) {
  return os << "Vertex(" << v.x << ", " << v.y << ", " << v.z << ")";
}

void Function(const std::vector<Vertex>& vertices) { // always use reference

}

int main() {
  std::vector<Vertex> vertices;
  vertices.reserve(3); // avoid copy by resize
  // vertices.push_back(Vertex(1, 2, 3));
  // vertices.push_back(Vertex(4, 5, 6));
  // vertices.push_back(Vertex(7, 8, 9));
  vertices.emplace_back(Vertex(1, 2, 3)); // constructs an object directly in place
  vertices.emplace_back(Vertex(4, 5, 6));
  vertices.emplace_back(Vertex(7, 8, 9));
  vertices.erase(vertices.begin() + 1);
  for (int i = 0; i < vertices.size(); i++) {
    std::cout << vertices[i] << std::endl;
  }
}