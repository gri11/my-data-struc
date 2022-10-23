#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    //write your code here
    int dif = (other.mCap-other.size()) - (mCap-size());
    if(dif > 0) return -1;
    else if(dif == 0) return 0;
    else return 1;
}

#endif
