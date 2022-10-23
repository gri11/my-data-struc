#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){

  std::ios_base::sync_with_stdio(false); std::cin.tie(0);

  int n, w;
  cin >> n >> w;
  vector<int> v(n);
  for(int i=0; i<n; i++) cin >> v[i];

  multiset<int> m;
  for(int i=0; i<n-w; i++){

    /*
    vector<int> m(v.begin()+i, v.begin()+i+w+1);
    sort(m.begin(), m.end());
    int me = *(m.begin()+(m.end()-m.begin())/2);
    cout << me << ' ';
    */

    if(!i){
      multiset<int> ma(v.begin()+i, v.begin()+i+w);
      m = ma;
    } 
    m.insert(v[i+w]);
    // cout << m.size() << ' ' << v[i+w] << '\n';
    auto it = m.begin();
    for(int j=0; j<m.size()/2; j++)it++;
    cout << *it << ' ';
    m.erase(m.lower_bound(v[i]));
  }

  return 0;
}