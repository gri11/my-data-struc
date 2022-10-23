#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  vector<T> u;
  for(auto it = begin(); it < end(); it++){
    if(it >= first && it < last-k){
      u.push_back(*(it+k));
    }
    else if(it >= last-k && it < last){
      u.push_back(*(first++));
    }
    else{
      u.push_back(*it);
    }
  }
  // for(auto vv : *this){

  // }
  *this = u;
}

#endif
