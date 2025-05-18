#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

class Train {
 private:
  struct Wagon {
    bool lamp;
    Wagon* next;
    Wagon* prev;
  };

  Wagon* start;
  int stepCounter;

 public:
  Train();

  void addWagon(bool lampState);
  int calculateLength();
  int getStepCount() const;
};

#endif  // INCLUDE_TRAIN_H_
