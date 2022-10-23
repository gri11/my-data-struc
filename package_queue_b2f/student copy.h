#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::to_front(int& pos) {
  //write your code here
  T tmp = mData[pos];
  for(int i = 1; i <= pos; i++){
    mData[(mFirst+i)%mCap] = mData[(mFirst+i-1)%mCap];
  } 
  mData[mFirst] = pos;
}

#endif
