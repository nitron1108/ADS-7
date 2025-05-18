#include <iostream>
#include "train.h"

int main() {
  Train t;

  const int total = 60; // можно менять

  for (int i = 0; i < total; ++i) {
    t.addWagon(false);  // можно поменять на true или рандом для эксперимента
  }

  int length = t.calculateLength();
  int ops = t.getStepCount();

  std::cout << "Length of the train: " << length << '\n';
  std::cout << "Number of steps taken: " << ops << '\n';

  return 0;
}
