#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  if(data.size() == 0) return;
  vector<T> v;
  sort(data.begin(), data.end());
  auto it = data.begin();
  for(int i = 0; i <= size(); i++){
    if(i == it->first && it != data.end()) {
      v.push_back(it->second);
      it++;
    }
    if(i != size()) v.push_back(mData[i]);
  }
  operator=(v);
}

#endif
