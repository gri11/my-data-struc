#include <iostream>
#include <math.h>

using namespace std;

int main(){
	long long n, k, ans=0; cin >> n >> k;
	long long node = k;
	n--;
	while(n > 0){
		if(k == 1) { ans = n; break; }
		// cout << "n: " << n << '\n';
		n -= node;
		node *= k;
		ans++;
	}
	cout << ans << '\n';
}