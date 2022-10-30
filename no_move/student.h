#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T& CP::vector_no_move<T>::operator[](int idx) {
  // your code here
  auto lb = std::lower_bound(aux.begin(), aux.end(), idx);
  auto st = (*lb == idx) ? lb : lb-1; //start idx
  int block = st - aux.begin(); 
  int nidx = idx - *st;

  // debug();
  return mData[block][nidx];
}

template <typename T>
void CP::vector_no_move<T>::expand_hook() {
  // your code here
  // you MAY need this function

  // use aux to collect index that each vector starts? lower bound to find.
  // aux = {};
  if(mSize == 0) 
    aux.push_back(0);
  else
    aux.push_back(aux.back() + (mData.end()-2)->size());
    //             prev idx       
}

#endif
