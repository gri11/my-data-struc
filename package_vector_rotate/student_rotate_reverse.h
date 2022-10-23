#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  vector<T> tmp(k);
  int l = k-1;
  for(auto it = last-1; it >= first; it--){
    // std::cout << *it << ' ' << *(it-k) << '\n';
    if(l >= 0) {
      // std::cout << "pb " << *it << '\n';
      tmp[l--] = *it;
    }
    *it = *(it-k);
  }
  for(int i = 0; i < k; i++){
    // std::cout << tmp[i] << '\n';
    *(first+i) = tmp[i];
  }
}

#endif
