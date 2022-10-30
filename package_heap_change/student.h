#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <assert.h>

template <typename T,typename Comp>
void CP::priority_queue<T,Comp>::change_value(size_t pos,const T& value) {
  //write your code here
  mData[pos] = value;
  if(pos == 0) { fixDown(0); return;}
  if(mLess(mData[pos], mData[(pos-1)/2])) fixDown(pos);
  else fixUp(pos);
}

#endif