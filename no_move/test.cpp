#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v = {0, 2};
	cout << *lower_bound(v.begin(), v.end(), 0) << '\n';
	cout << *upper_bound(v.begin(), v.end(), 1) << '\n';
	// cout << (v.end() == lower_bound(v.begin(), v.end(), 5));
}