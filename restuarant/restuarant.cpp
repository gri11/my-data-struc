#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	vector<int> chef(n);
	vector<int> t(n);
	for(int i = 0; i < n; i++) cin >> chef[i];

	while(m--){
		// TODO: find min and try to find how to find next one
		auto me = min_element(t.begin(), t.end());
		cout << *me << '\n';
		*me += chef[me-t.begin()];
	}


	return 0;
}