#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  vector<T> tmp;
  int l = k;
  for(auto it = first; it <= last-k; it++){
    if(l) {
      tmp.push_back(*it);
      l--;
    }
    *it = *(it+k);
  }
  auto cp = tmp.begin();
  for(auto it = last-k+1; it < last; it++){
    std::cout << *cp << '\n';
    *it = *(cp++);   
  }
}

#endif
