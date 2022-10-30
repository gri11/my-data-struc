#include <iostream>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	while(m--){
		int x, y; cin >> x >> y;
		int a, b;
		bool ans=false;
		if(x == y && !ans) { cout << "a and b are the same node\n"; ans=true; }
		a=x; b=y;
		while(a > 0 && !ans){
			a = (a-1)/2;
			if(a == b) { cout << "b is an ancestor of a\n"; ans=true; }
		}
		a=x; b=y;
		while(b > 0 && !ans){
			b = (b-1)/2;
			if(a == b) { cout << "a is an ancestor of b\n"; ans=true; }
		}
		if(!ans) cout << "a and b are not related\n";
	}
}