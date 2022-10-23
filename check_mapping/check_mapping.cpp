#include <iostream>
#include <set>

#define lld long long int

using namespace std;

int main(){
  int n;
  cin >> n;
  set<lld> s, a;
  for(int i=1; i<=n; i++) a.insert(i);
  for(int i=0; i<n; i++){
    lld x;
    cin >> x;
    s.insert(x);
  }
  // cout << s.size() << n;
  if(s.size()!=n) cout << "NO";
  else{
    for(auto &x : s){
      if(a.find(x)==a.end()) {cout << "NO"; return 0;}
    }
    cout << "YES";
  }

  return 0;
}