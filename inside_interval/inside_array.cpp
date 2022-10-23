#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  
  pair<int, int> A[n];
  for(int i=0; i<n; i++){
    int a, b;
    cin >> a >> b;
    A[i] = make_pair(a, b);
  }  

  while(m--){
    int x;
    cin >> x;
    bool ans=0;
    for(int i=0; i<n; i++){
      if(x>=A[i].first && x<=A[i].second){ans=1; break;}
    }
    cout << ans << ' ';
  }

  return 0;
}