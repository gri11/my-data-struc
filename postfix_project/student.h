#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  //WRITE YOUR CODE HERE
  //DON"T FORGET TO RETURN THE RESULT

  stack<int> s;

  for(auto [i, x] : v){
    if(i) s.push(x);
    else{
      int b = s.top(); s.pop();
      int a = s.top(); s.pop();
      int c;
      switch (x){
        case 0: c = a+b; break;
        case 1: c = a-b; break;
        case 2: c = a*b; break;
        case 3: c = a/b; break;
      }
      s.push(c);
      // cout << s.top() << endl;
    }
  }

  return s.top();
}

#endif
