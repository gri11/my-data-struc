#include <iostream>
#include <map> 

#define lld long long int

using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);

	int n, m;
	cin >> n >> m;

	map<lld, lld> m_sd; //son -> dad`
	while(n--){
		lld dad, son;
		cin >> dad >> son;
		m_sd[son] = dad;
	}
	// for(auto &x : m_sd){
	// 	cout << x << ' ' << m_sd[x] << endl;
	// }
	// cout << m_sd[1]
	while(m--){
		lld a, b;
		cin >> a >> b;
		if(m_sd.find(a)==m_sd.end() || m_sd.find(b)==m_sd.end() || m_sd.find(m_sd[a])==m_sd.end() || m_sd.find(m_sd[b])==m_sd.end() || a==b){
			cout << "NO" << endl;
			continue;
		}
		if(m_sd[m_sd[a]] == m_sd[m_sd[b]]){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}
