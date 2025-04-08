// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/G
#include <bits/stdc++.h>
using namespace std;

void solve(int n, int ogn) {
	if(n < 1) return;

	solve(n - 1, ogn);

	for(int j = 0; j < ogn - n; j++)
		cout << " ";

	for(int j = 0; j < n * 2 - 1; j++)
		cout << "*";

	cout << endl;
}

int main() {
	int n;
	cin >> n;

	solve(n, n);

	return 0;
}
