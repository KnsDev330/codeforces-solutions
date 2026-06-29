#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
	int n, k;
	cin >> n >> k;

	int a[n];

	int initialMulti = 1;
	int mod3_2       = 0;
	int mod4_1       = 0;
	int mod4_2       = 0;
	int mod4_3       = 0;
	int fiveMin      = 0;

	for(int i = 0; i < n; i++) {
		cin >> a[i];
		initialMulti = (initialMulti * a[i]) % k;
		if(a[i] % 3 == 2) mod3_2++;
		if(a[i] % 4 == 1) mod4_1++;
		else if(a[i] % 4 == 2) mod4_2++;
		else if(a[i] % 4 == 3) mod4_3++;
		fiveMin = max(fiveMin, a[i] % 5);
	}

	if(initialMulti % k == 0) {
		cout << 0 << endl;
		return;
	}

	if(k == 2) {
		cout << 1 << endl;
		return;
	}

	if(k == 3) {
		cout << (mod3_2 ? 1 : 2) << endl;
		return;
	}

	if(k == 4) {
		if(mod4_2 >= 2) {
			cout << 0 << endl;
			return;
		}
		if(mod4_3 || (mod4_1 && mod4_2)) {
			cout << 1 << endl;
			return;
		}
		cout << 2 << endl;
		return;
	}

	cout << 5 - fiveMin << endl;
}

signed main() {
	int tt;
	cin >> tt;

	while(tt--)
		solve();

	return 0;
}
