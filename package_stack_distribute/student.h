#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
  stack<T> sta = *this;
  using std::vector;
  vector<vector<T>> ret;
  int s = mSize/k;
  int r = mSize%k;
  while(k--){
    vector<T> v;
    int vs = s;
    if(r>0&&r--) vs++;
    while(vs--) {
      v.push_back(sta.top()); sta.pop();
    }
    ret.push_back(v);
  }

  return ret;
}

#endif
