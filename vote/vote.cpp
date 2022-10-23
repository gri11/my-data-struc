#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  map<string, int> m;
  while(n--){string s; cin >> s; m[s]++;}
  vector<int> v;
  for(auto &x : m){
    v.push_back(x.second);
  }
  sort(v.begin(), v.end(), greater<int>());
  if(k > v.size())cout << *(v.end()-1);
  else cout << *(v.begin()+k-1);
  return 0;
}