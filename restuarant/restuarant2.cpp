#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>

using namespace std;

class PQLess {
public:
	bool operator()(const pair<int, int>& LHS, const pair<int, int>& RHS){
		return LHS.first > RHS.first;
	}
};

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	vector<int> chef(n);
	PQLess comp;
	priority_queue<pair<int, int>, vector<pair<int, int>>, PQLess> t(comp);
	for(int i = 0; i < n; i++) {
		cin >> chef[i];
		t.push(make_pair(0, chef[i]));
	}

	int mn = 0;
	while(m--){
		// TODO: find min and try to find how to find next one
		auto p = t.top(); t.pop();
		cout << p.first << '\n';


		t.push(make_pair(p.first+p.second, p.second));
	}


	return 0;
}