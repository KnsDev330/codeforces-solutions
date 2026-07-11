#include <bits/stdc++.h>
using namespace std;
#define int long long

using vi = vector<int>;

#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define ROF(i, a, b) for(int i = (a); i >= (b); --i)

#ifdef LOCAL
#include "../../debug.h"
#else
#define debug(...)
#endif


signed main() {
	ios::sync_with_stdio(0), cin.tie(0);

	int tt;
	cin >> tt;

	while(tt--) {
		int n;
		cin >> n;

		int x;
		int mn = LLONG_MAX;
		int mx = LLONG_MIN;
		FOR(i, 0, n) {
			cin >> x;
			mn = min(mn, x);
			mx = max(mx, x);
		}

		cout << (mx - mn + 1) << endl;
	}

	return 0;
}
