#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  if( m<=0 || (b > a && b <= a+m-1) || (b < a && b+m-1 >= a) ||
      a+m > mData+mSize || b+m > mData+mSize || a < mData || 
      b < mData || a > mData+mSize-1 || b > mData+mSize-1)  
    return false;

  using std::swap;

  while(m--){
    swap(*(a++), *(b++));
  }

  return true;  
}

#endif
