#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  //write your code ONLY here
  mCap = 1;
  mData = new T[mCap]();
  mSize = 0;

  if(first == last) return;
  stack<T> s;
  auto it = --last;
  while(true) {
    // std::cout << *it << '\n';
    s.push(*it);
    if(it == first) {
      // std::cout << "break" << '\n';
      break;    
    }
    // std::cout << "DO" << '\n';
    it--;
    // std::cout << "DO" << '\n';
  }
  // std::cout << "out" << '\n';
  operator=(s);
  // std::cout << "copied" << '\n';
}

#endif
