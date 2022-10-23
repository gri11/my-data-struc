#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  vector<T> v;
  for(T* it = begin(); it <= end(); it++){
    if(it == position) for(first; first < last; first++) v.push_back(*first);
    if(it != end()) v.push_back(*it);
  }
  operator=(v);
}

#endif
