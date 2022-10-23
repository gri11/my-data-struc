#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  if(pos.empty()) return;
  vector<T> v;
  auto it = pos.begin();
  for(int i = 0; i < mSize; i++){
    if(i == *it && it != pos.end()) ++it;
    else v.push_back(mData[i]);
  }
  operator=(v);
}

#endif
