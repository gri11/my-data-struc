#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main(){

  std::ios_base::sync_with_stdio(false); std::cin.tie(0);

  int n, m;
  cin >> n >> m;
  vector<pair<int, int> > v;
  while(n--){
    vector<int> u;
    int a, b;
    cin >> a >> b;
    v.push_back(make_pair(a, b));
  }
  
  while(m--){
    int x;
    cin >> x;
    bool ans=0;
    
    // for(auto &vv : v){
    //   if(x>=vv.first && x<=vv.second){ans=1; break;}
    // }

    // for(vector<pair<int, int> >::iterator vv = v.begin(); vv != v.end(); vv++)if(x>=vv->first && x<=vv->second){ans=1; break;}
    cout << ans << ' ';
  }

  return 0;
}