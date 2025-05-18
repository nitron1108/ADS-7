// Copyright 2022 NNTU-CS
#include <iostream>
#include "train.h"

int main() {
  Train train;

  const int wagonCount = 60;  // количество вагонов
  for (int i = 0; i < wagonCount; ++i) {
    train.addCar(false);  // все лампы выключены
  }

  std::cout << "Train length: " << train.getLength() << std::endl;
  std::cout << "Operations count: " << train.getOpCount() << std::endl;

  return 0;
}
