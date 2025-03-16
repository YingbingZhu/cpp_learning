//
// Created by yingbingzhu on 2025/3/16.
//

#include <iostream>
#include <chrono>
#include <thread>
struct Timer {
  std::chrono::time_point<std::chrono::steady_clock> start, end; // monotonic time (always increasing)
  std::chrono::duration<float> duration;
  Timer() {
    start = std::chrono::steady_clock::now();
  }

  ~Timer() {
    end = std::chrono::steady_clock::now();
    duration = end - start;
    float ms = duration.count() * 1000.0f;
    std::cout << ms << std::endl;
  }

};
void Function() {
  Timer t;
  for (int i = 0; i < 10; i++) {
    std::cout << "Hello" << std::endl;
  }
}
int main() {
  auto start = std::chrono::high_resolution_clock::now(); // highest precision
  std::this_thread::sleep_for(std::chrono::seconds(1));
  auto end = std::chrono::high_resolution_clock::now();

  std::chrono::duration<double> diff = end - start;
  std::cout << diff.count() << " seconds" << std::endl;

  Function();

}
