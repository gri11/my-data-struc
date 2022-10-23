#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
  stack<T> ins;
  while(m--){
    if(!s2.empty()){
      ins.push(s2.top()); s2.pop();
    }
  }
  stack<T> tmp;
  while(k--){
    if(!empty()){
      tmp.push(top()); pop();
    }
  }
  while(!ins.empty()){
    push(ins.top()); ins.pop();
  }
  while(!tmp.empty()){
    push(tmp.top()); tmp.pop();
  }
}
#endif
