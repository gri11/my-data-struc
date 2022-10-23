#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main(){

  std::ios_base::sync_with_stdio(false); std::cin.tie(0);

  int n, m;
  cin >> n >> m;
  vector<int> v;

  while(n--){
    vector<int> u;
    int a, b;
    cin >> a >> b;
    v.push_back(a);
    v.push_back(b);
  }

  sort(v.begin(), v.end());
  
  while(m--){
    int x;
    cin >> x;
    bool ans=0;
    auto it = lower_bound(v.begin(), v.end(), x);
    if((it!=v.end() && (it-v.begin())%2) || *it==x) ans=1;
    cout << ans << ' ';

    // cout << x << ' ';
    // cout << *it << ' ';
    // cout << endl;
  }

  return 0;
}