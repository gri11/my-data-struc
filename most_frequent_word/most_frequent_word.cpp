#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    map<string, int> m;
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        // if(m.find(s) == m.end())m[s]=0;
        m[s]++;
    }

    // copy to vector of pair and sort.
    vector<pair<int, string>> ans;
    for(auto &x : m){
        ans.push_back(make_pair(x.second, x.first));
    }
    sort(ans.begin(), ans.end());
    auto it = --ans.end();
    cout << it->second << " " << it->first;
}