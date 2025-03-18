//
// Created by yingbingzhu on 2025/3/18.
//

#include <iostream>

int main() {
  int** a2d = new int*[10];// a pointer of a collection of pointers
  for (int i = 0; i < 10; i++) {
    a2d[i] = new int[10];
  }

  for (int i = 0; i < 10; i++) {
    delete[] a2d[i];
  }
  delete[] a2d;

  int*** a3d = new int**[10];
  for (int i = 0; i < 10; i++) {
    a3d[i] = new int*[10];
    for (int j = 0; j < 10; j++) {
      a3d[i][j] = new int[10];
    }
  }
}