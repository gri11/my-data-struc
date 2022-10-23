#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  //write your code here
  vector<T> v(mSize*2);
  auto it = begin();
  auto rit = end()-1;
  for(int i = 0; i < mSize*2; i++){
    if(i >= mSize){
      *(v.begin()+i) = *rit;
      rit--;
    }
    else {
      *(v.begin()+i) = *it;
      it++;
    }
  }
  operator=(v);
}

#endif
