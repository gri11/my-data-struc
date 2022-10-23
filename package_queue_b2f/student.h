#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::back_to_front() {
  //write your code here
  // [2 3 4] 0 2 3 4 
  // [4 2 3] 4 2 3 4 
  // [3 4 2] 2 2 3 4
  if(mFront > 0){
    mData[--mFront] = mData[(mFront+mSize-1)%mCap];
  }
  else{
    mFront = mCap-1;
    mData[mFront] = mData[mSize-1];
  }
}

#endif
