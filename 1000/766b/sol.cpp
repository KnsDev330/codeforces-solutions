// https://codeforces.com/problemset/problem/766/B
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];

	sort(a, a + n);

	bool canDo = false;

	for(int i = 0; i < n - 2; i++) {
		if(a[i] + a[i + 1] > a[i + 2] && a[i] + a[i + 2] > a[i + 1] && a[i + 1] + a[i + 2] > a[i]) {
			canDo = true;
			break;
		}
	}

	cout << (canDo ? "YES\n" : "NO\n");

	return 0;
}
