#include <iostream>
#include <math.h>

using namespace std;

int main(){
	// long double n = 1e8;
	long double n; cin >> n;

	cout.precision(0);
	cout << fixed << pow(2, (ceil(log2(n)))) - n;

	return 0;
}