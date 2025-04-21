// Copyright 2022 NNTU-CS
#include<list>
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_
template<typename T>
class TPQueue {
private:
  std::list<T> arr;
public:
  void push(const T& el) { 
    auto pos = arr.begin();
    while (pos!=arr.end() && pos->prior>=el.prior) {
      ++pos;
    }
    arr.insert(pos, el);
  }
  T pop() {
    T temp = arr.front();
    arr.pop_front();
    return temp; 
  }
};

struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
