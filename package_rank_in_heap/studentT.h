#ifndef __STUDENT_H_
#define __STUDENT_H_

using namespace std;

template <typename T,typename Comp>
size_t CP::priority_queue<T,Comp>::get_rank(size_t pos) const {
  //write your code here
  CP:priority_queue<T, Comp> pq(*this);
  size_t i = 0, rank = 0;
  for(; i < mSize; i++) if(mData[pos] == mData[i]) { 
    while(pq.top() != mData[pos]){
      pq.pop();
      rank++;
    }
    return rank;
    // return i;
  }
}

#endif