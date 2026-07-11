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
		int a, b;
		cin >> a >> b;

		if(a == b) {
			cout << 0 << endl;
			continue;
		}

		int mn = min(a, b);
		int mx = max(a, b);

		if(a == b) cout << 0 << endl;
		if((a % 2 && b % 2) || (mx % mn != 0)) cout << -1 << endl;
		else {
			int ts = 0;
			while(mn < mx) {
				mn *= 2;
				ts++;
			}

			int ans = 0;

			while(ts >= 3)
				ans++, ts -= 3;
			while(ts >= 2)
				ans++, ts -= 2;
			ans += ts;

			cout << ans << endl;
		}
	}

	return 0;
}
