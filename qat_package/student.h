#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
  //write something here
  // if(idx < 0) return mData[(mFront+mSize+idx)%mCap];
  // else return mData[(mFront+idx)%mCap];
  return idx >= 0 ? mData[(mFront+idx)%mCap] : mData[(mFront+mSize+idx)%mCap];
}

#endif
