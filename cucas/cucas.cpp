#include <iostream>
#include <map>
#include <vector>
#include <iomanip>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false); cin.tie(0);
  cout << std::fixed << std::setprecision(2);

  int n;
  cin >> n;
  map<int, vector<int>> m_sub;
  map<string, vector<int>> m_t;
  while(n--){
    int sub, score;
    string t;
    cin >> sub >> t >> score;
    m_sub[sub].push_back(score);
    m_t[t].push_back(score);
  }
  for(auto &x : m_sub){
    auto v = x.second;
    int sum = 0;
    for(auto &vv : v) sum += vv;
    cout << x.first << ' ' << (sum + 0.0)/v.size() << '\n';
  }
  for(auto &x : m_t){
    auto v = x.second;
    int sum = 0;
    for(auto &vv : v) sum += vv;
    cout << x.first << ' ' << (sum + 0.0)/v.size() << '\n';
  }

  return 0;
}