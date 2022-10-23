#include <iostream>
#include <set>

using namespace std;

int main(){
  std::ios_base::sync_with_stdio(false); std::cin.tie(0);

  int n, m;
  cin >> n >> m;
  multiset<int> h;
  for(int i=0; i<n; i++){int x; cin >> x; h.insert(x);}

  int r;
  for(r=1; r<=m; r++){
    int card;
    cin >> card;

    for(int i=0; i<card; i++){
      int x; 
      cin >> x;
      auto up = h.upper_bound(x);
      if(h.size()==0 || up == h.end()){cout << r; return 0;}
      h.erase(up);

      // cout << *up << ' ';
      // for(auto &hh : h)cout << hh << ' ';
      // cout << endl;
    }
  }
  cout << r;

  return 0;
}