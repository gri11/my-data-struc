#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,vector<int>::iterator a,vector<int>::iterator b) {
  //write your code only in this function
  vector<int> r;
  
  //before reverse
  for(auto it = v.begin(); it != a; it++) r.push_back(*it);

  //reverse part
  for(auto it2 = b-1;it2 != a-1;it2--) r.push_back(*it2);

  //after reverse
  for(;b != v.end();b++) r.push_back(*b);

  v = r;
}
int main() {
  //read input
  int n,a,b;
  cin >> n;
  vector<int> v;
  for (int i = 0;i < n;i++) {
    int c;
    cin >> c;
    v.push_back(c);
}
cin >> a >> b;
  //call function
  reverse(v,v.begin()+a,v.begin()+b+1);
  //display content of the vector
  for (auto &x : v) {
    cout << x << " ";
  }
  cout << endl;
}