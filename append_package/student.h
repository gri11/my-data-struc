#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        for(int i = 0; i < mSize; i++){
            s.push(mData[i]);
        }
        *this = s;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        stack<T> s;
        for(int i = q.size()-1; i >= 0; i--){
            s.push(q.mData[(q.mFront+i)%q.mCap]);
        }
        for(int i = 0; i < mSize; i++){
            s.push(mData[i]);
        }
        *this = s;
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        for(int i = s.size()-1; i >= 0; i--){
            push(s.mData[i]);
        }
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        for(int i = 0; i < q.size(); i++){
            push(q.mData[(q.mFront+i)%q.mCap]);
        }
    }
}
