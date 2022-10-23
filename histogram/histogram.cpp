#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
  int n;
  cin >> n;
  map<string, int> m;
  while(n--){
    string s;
    cin >> s;
    m[s]++;
  }
  for(auto& mm : m){
    if(mm.second > 1) cout << mm.first << ' ' << mm.second << '\n';
  }

  return 0;
}