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
    int y, m;
    cin >> y >> m;
    
    v.push_back(make_pair(y, m));
  }

  sort(v.begin(), v.end());

  while (m--)
  {
    int y, m;
    cin >> y >> m;

    auto p = make_pair(y,m);
    auto lb = lower_bound(v.begin(), v.end(), p);

    if(*lb == p) cout << "0 0 ";
    else if(lb == v.begin() && *lb != p) cout << "-1 -1 ";
    else if(*lb != p){
      lb--;
      cout << lb->first << ' ' << lb->second << ' ';
    }
  }
  


  return 0;
}