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

map<int, bool> mp;
vector<int> primes;


signed main() {
	int n, x;
	cin >> n >> x;

	if(x == 1) {
		cout << 1 << endl;
		return 0;
	}

	int ans = x <= n ? 2 : 0;
	int sq  = sqrt(x);
	for(int i = 2; i <= sq; i++) {
		if(x % i == 0) {
			if(i <= n) ans++;
			if(x / i <= n) ans++;
		}
	}

	cout << ans;

	return 0;
}
