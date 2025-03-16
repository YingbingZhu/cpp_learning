//
// Created by yingbingzhu on 2025/3/15.
//

#include <thread>
#include <iostream>

static bool s_Finished = false;

void DoWork() {
  while (!s_Finished) {
    std::cout << "Working..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
}

int main() {
  std::thread worker(DoWork); // Creates a thread object that starts executing the DoWork function immediately.

  std::cin.get();
  s_Finished = true;

  worker.join(); // wait for this thread to end

  std::cin.get();
}
