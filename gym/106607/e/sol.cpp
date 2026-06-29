#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../../../debug.h"
#else
#define debug(...)
#endif

#define ll long long

void solve() {
	ll n;
	cin >> n;

	vector<ll> pos(n), up(n, 0), down(n, 0), mid(n, 0);
	ll ans = 0;
	vector<pair<ll, ll>> a(n);
	for(ll i = 0; i < n; i++) {
		cin >> a[i].first >> a[i].second;

		if(a[i].first == a[i].second) pos[i] = 0;
		else if(a[i].first < a[i].second) pos[i] = 1;
		else pos[i] = -1;
	}

	for(ll i = n - 1; i > 0; i--) {
		up[i - 1]   = (up[i] + (pos[i] == 1));
		mid[i - 1]  = (mid[i] + (pos[i] == 0));
		down[i - 1] = (down[i] + (pos[i] == -1));
	}

	for(ll i = 0; i < n; i++) {
		if(pos[i] == 0) ans += up[i] + down[i] + mid[i];
		else if(pos[i] == -1) ans += up[i] + mid[i];
		else ans += down[i] + mid[i];
	}

	debug(pos);
	debug(up);
	debug(mid);
	debug(down);

	cout << ans << endl;
}

signed main() {
	ll tt;
	cin >> tt;

	while(tt--)
		solve();

	return 0;
}
