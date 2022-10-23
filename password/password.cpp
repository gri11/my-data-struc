#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

int main(){ 

  std::ios_base::sync_with_stdio(false); std::cin.tie(0);

  int n, m, l;
  cin >> n >> m >> l;

  vector<int> v(l);
  for(int i=0; i<l; i++) cin >> v[i];

  set<string> set_s;
  for(int i=0; i<n; i++){
    string s;
    cin >> s;
    for(int i=0; i<l; i++){
      int c = (int)s[i]-v[i];
      // cout << (char)c << ' ' << c << ' ';
      if(c < int('a')) {
        c = int('z')-(int('a')-1-c)%26;
      }
      s[i] = (char)(c);
      // cout << "--->" << s[i] << ' ' << c << ' ';
    }
    // cout << '\n';
    // cout << s << '\n';
    set_s.insert(s);
  }

  for(int i=0; i<m; i++){
    string s;
    cin >> s;
    if(set_s.find(s)!=set_s.end()) cout << "Match" << '\n';
    else cout << "Unknown" << '\n';
  }

  return 0;
}