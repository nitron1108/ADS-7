// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

class Train {
 private:
  struct Wagon {
    bool lamp;
    Wagon* next;
    Wagon* prev;
  };

  Wagon* entryPoint;      // указатель на произвольный вагон (вход)
  int stepCounter;        // число переходов между вагонами

 public:
  Train();  // конструктор

  void addWagon(bool lampState);     // добавление вагона
  int calculateLength();             // вычисление длины
  int getStepCount() const;          // получить число переходов

  // Обёртки под тесты
  void addCar(bool lampState) { addWagon(lampState); }
  int getLength() { return calculateLength(); }
  int getOpCount() const { return getStepCount(); }
};

#endif  // INCLUDE_TRAIN_H_
