#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
	int n, a;
	cin >> n >> a;
	vector<int> v;
	queue<int> q;
	q.push(a);
	while(!q.empty()){
		a = q.front();
		if (a * 2 + 1 < n) { q.push(a*2+1); }
		if (a * 2 + 2 < n) { q.push(a*2+2); }
		v.push_back(a);
		q.pop();
	}

	cout << v.size() << '\n';
	for(auto &vv : v) cout << vv << ' ';
}