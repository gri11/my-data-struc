#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  //write your code here
  for(auto &l : ls){
    end().ptr->prev->next = l.begin().ptr;
    l.begin().ptr->prev = end().ptr->prev;

    l.end().ptr->prev->next = end().ptr;
    end().ptr->prev = l.end().ptr->prev;

    mSize += l.size();

    l.end().ptr->next = l.end().ptr;
    l.end().ptr->prev = l.end().ptr;
    l.mSize = 0;
  }
}

#endif
