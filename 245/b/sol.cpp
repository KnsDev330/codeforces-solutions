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
		int n, k;
		cin >> n >> k;

		int a[n];
		FOR(i, 0, n) cin >> a[i];

		int needB = 0, needR = 0;
		int b = 0, r = 0;
		for(auto &x : a) {
			if(x > 0) {
				r += abs(x);
				b -= abs(x);

				if(b < 0) {
					needB += abs(b);
					b      = 0;
					debug(x, b, r, needB, needR);
				}
			}
			else {
				r -= abs(x);
				b += abs(x);

				if(r < 0) {
					needR += abs(r);
					r      = 0;
					debug(x, b, r, needB, needR);
				}
			}
		}


		cout << (needB + needR <= k ? "Yes" : "No") << endl;
	}

	return 0;
}
