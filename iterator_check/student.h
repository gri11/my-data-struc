#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const {
  //write your code here
  auto bg = mData;
  auto en = mData + mSize;
  if(it >= bg && it < en) return true;
  return false;
}

#endif
