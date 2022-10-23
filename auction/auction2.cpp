#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

#define mp make_pair

using namespace std;

void printvec2d(vector<vector<int>> v){
	bool ignore_first = true;
	for(auto& vv : v){
		if(ignore_first){
			ignore_first = false;
			continue;
		}
		if(vv.empty()) cout << "NONE";
		for(auto& vvv : vv){
			cout << vvv << ' ';
		}
		cout << '\n';
	}
}

int main(){
	// vector of vector of pair
	// vector of ans
	int n, m, a;
	cin >> n >> m >> a;

	vector<int> amt(n+1); // for a in amt: max_element != 0
	vector<vector<int>> auc(n+1, vector<int>(m+1));
	vector<vector<int>> ans(m+1);

	for(int i = 1; i <= n; i++) cin >> amt[i];

	while(a--){
		char o; cin >> o;
		if(o == 'B'){
			int u, i, v;
			cin >> u >> i >> v;
			auc[i][m-u+1] = v;
		}
		else if(o == 'W'){
			int u, i;
			cin >> u >> i;
			auc[i][m-u+1] = 0;
		}
	}

	for(int i = 1; i <= n; i++){
		auto me = max_element(auc[i].begin(), auc[i].end());
		while(*me != 0 && amt[i] != 0){
			//cout << me-auc[i].begin();
			int u = me-auc[i].begin();
			ans[m-u+1].push_back(i);
			amt[i]--;
			*me = 0;
			me = max_element(auc[i].begin(), auc[i].end());
		}
	}

	// vector<pair<int, int>> v = {{10, 1}, {10, 2}};
	// max_element(v.begin(), v.end());

	printvec2d(ans);

	// printvec2d(auc);
	return 0;
}