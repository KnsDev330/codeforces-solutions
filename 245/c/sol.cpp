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
		int n, x;
		cin >> n >> x;

		int a[n * 3];
		for(int i = 0; i < n * 3; i++) {
			a[i] = 1;
		}

		int zs = n * 3 - x;
		debug(n, zs);
		int i = 0;
		while(zs > 0) {
			int scnd  = n + i;
			int third = n * 2 + i;

			if(zs > 0) a[scnd] = 0, zs--;
			if(zs > 0) a[third] = 0, zs--;
			i++;

			if(i == n) {
				i = 0;
				while(zs--)
					a[i++] = 0;
				break;
			}
		}

		for(auto& x : a)
			cout << x;
		cout << endl;
	}

	return 0;
}
