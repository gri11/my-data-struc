#include <iostream>
#include <set>

using namespace std;

int main(){
    int m, n;
	cin >> m >> n;
    set<long int> s1, s2;
	while(m--) {long int x; cin >> x; s1.insert(x);}	
	while(n--) {long int x; cin >> x; s2.insert(x);}
	
	set<long int> ans;
	for(auto &x : s1){
		if(s2.find(x) != s2.end())ans.insert(x);
	}	
	
	for(auto &x : ans) cout << x << ' ';

	return 0;
}
