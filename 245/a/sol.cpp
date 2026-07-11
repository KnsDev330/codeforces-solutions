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
		int x, y;
		cin >> x >> y;

		int ans = 0;

		while(x != y) {
			ans += ceil(x / 10.0);
			x--;
		}

		cout << ans << endl;
	}

	return 0;
}
