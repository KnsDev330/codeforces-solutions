// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
#include <bits/stdc++.h>
using namespace std;

void solve(int x) {
	if(x <= 0) return;

	solve(x / 10);
	cout << (x % 10) << " ";
}

int main() {
	int tt;
	cin >> tt;

	while(tt--) {
		int x;
		cin >> x;
		if(x == 0) cout << 0;
		else solve(x);
		cout << endl;
	}

	return 0;
}
