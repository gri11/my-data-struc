#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  while(K--){
    if(!empty()) pop();
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
  //don't forget to return an std::stack
  std::stack<T> s;
  int n = 0;
  while(K--){
    if(!empty()){
      s.push(top()); pop();
      n++;
    }
  }
  std::stack<T> ret;
  while(n--){
    ret.push(s.top()); s.pop();
  }
  return ret;
}

#endif
