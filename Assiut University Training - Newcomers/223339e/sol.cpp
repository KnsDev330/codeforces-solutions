// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E
#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
	if(n <= 0) return;

	solve(n / 2);
	cout << (int)n % 2;
}

int main() {
	int tt;
	cin >> tt;

	while(tt--) {
		int n;
		cin >> n;
		solve(n);
		cout << endl;
	}

	return 0;
}
