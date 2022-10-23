#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

  std::ios_base::sync_with_stdio(false); std::cin.tie(0);

  int n, m, k;
  cin >> n >> m >> k;

  vector<int> v(n);
  for(int i=0; i<n; i++){int x; cin >> x; v[i]=x;}

  sort(v.begin(), v.end());

  while(m--){
    int p;
    cin >> p;

    auto lb = lower_bound(v.begin(), v.end(), p-k);
    auto up = upper_bound(v.begin(), v.end(), p+k);

    cout << up-lb << ' ';
  }

  return 0;
}