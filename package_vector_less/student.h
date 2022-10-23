#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
  int i = 0; int j = 0;
  while(i != this->size() || j != other.size()){
    if(i == this->size() && j < other.size()) return true;
    if(i < this->size() && j == other.size()) return false;
    if(this->mData[i] < other[j]) return true;
    if(this->mData[i] > other[j]) return false;
    i++; j++;
  }
  return false;
}

#endif
