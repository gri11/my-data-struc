#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::map<T, size_t> count;
    for(size_t i = 0; i < mSize; i++){
        T f = mData[(mFront+i)%mCap];
        if(count.find(f) == count.end()) count[f] = 0;
        count[f]++;
    }
    std::vector<std::pair<T, size_t>> v;
    for(auto& kk : k){
        v.push_back({kk, count[kk]});
    }

    return v;
}

#endif
