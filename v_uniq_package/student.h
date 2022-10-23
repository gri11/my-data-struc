#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include <set>

template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  std::set<T> s;
  vector<T> v;
  for(int i = 0; i < size(); i++){
    if(s.find(mData[i]) == s.end()){
      v.push_back(mData[i]);
      s.insert(mData[i]);
    }
  }
  // operator=(v);
  *this = v;
}

#endif
