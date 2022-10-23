#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  int tmp[k];
  int lnx = last-mData, fnx = first-mData; 
  int l = last-first;
  for(int i = lnx-1; i >= fnx+k; i--){
    if(i > lnx-1-k) {
      tmp[(i+k)%(lnx)] = mData[i];
      // std::cout << "tmp inx: " << (i+k)%(l-1) << '\n';
    }

    mData[i] = mData[i-k];
  }
  for(int j = 0; j < k; j++){
    // std::cout << tmp[j] << '\n';
    first[j] = tmp[j];
  }
}

#endif
