#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v1, v2;
    while(n--){
        int x;
        cin >> x;
        v1.push_back(x);
    }
    while(m--){
        int x;
        cin >> x;
        v2.push_back(x);
    }
    vector<int> in;
    for(auto x : v1){
        if(find(v2.begin(),v2.end(), x) != v2.end() && find(in.begin(),in.end(), x) == in.end()) in.push_back(x);
    }
    sort(in.begin(), in.end());
    for(auto x : in) cout << x << " ";
}