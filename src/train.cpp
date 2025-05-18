#include "train.h"

Train::Train() : start(nullptr), stepCounter(0) {}

void Train::addWagon(bool lampState) {
  Wagon* unit = new Wagon{lampState, nullptr, nullptr};
  if (!start) {
    start = unit;
    unit->next = unit;
    unit->prev = unit;
  } else {
    Wagon* tail = start->prev;
    tail->next = unit;
    unit->prev = tail;
    unit->next = start;
    start->prev = unit;
  }
}

int Train::calculateLength() {
  if (!start) return 0;

  stepCounter = 0;
  Wagon* pointer = start;

  if (!pointer->lamp) {
    pointer->lamp = true;
  }

  while (true) {
    int distance = 0;
    Wagon* forward = pointer;

    do {
      forward = forward->next;
      distance++;
      stepCounter++;
    } while (!forward->lamp);

    forward->lamp = false;

    Wagon* backtrack = forward;
    for (int i = 0; i < distance; i++) {
      backtrack = backtrack->prev;
      stepCounter++;
    }

    if (backtrack == pointer && !backtrack->lamp) {
      return distance;
    }
  }
}

int Train::getStepCount() const {
  return stepCounter;
}
