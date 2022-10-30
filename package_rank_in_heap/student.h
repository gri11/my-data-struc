#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <math.h>
#include <stack>

using namespace std;

template <typename T,typename Comp>
size_t CP::priority_queue<T,Comp>::get_rank(size_t pos) const {
  //write your code here
  CP:priority_queue<T, Comp> pq(*this);
  size_t i = 0, rank = 0;
  for(; i < mSize; i++) if(mData[pos] == mData[i]) { 
    rank = log2(i+1);
    // cout << "log2: " << log2(i+1) << '\n';
    T tmp = mData[i];
    while(i > 0){
      if(i == ((i-1)/2)*2+1 && mLess(tmp, mData[i+1])) {
        mData
      }
    }
  }
  return rank;
}

#endif