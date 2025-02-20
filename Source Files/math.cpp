int multiply(int a, int b) {
  return a * b;
}

struct vec2 {
  float x, y;

  void Add(const vec2& other) {
    x = other.x;
    y = other.y;
  }
};


