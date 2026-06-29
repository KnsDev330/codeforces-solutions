#include <bits/stdc++.h>
using namespace std;
using ll = long long;

using vi  = vector<int>;
using vll = vector<ll>;

#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define ROF(i, a, b) for(int i = (a); i >= (b); --i)

#ifdef LOCAL
#include "../../debug.h"
#else
#define debug(...)
#endif

map<int, bool> mp;
vector<int> primes;


int main() {
	int n, d;
	cin >> n >> d;

	int a[n];
	for(auto& x : a)
		cin >> x;

	sort(a, a + n);
	int i = 0, j = n - 1, ans = 0, now_p = a[j];

	while(i <= j) {
		if(now_p > d) {
			ans++;
			j--;
			now_p = a[max(0, j)];
		}
		else {
			i++;
			now_p += a[j];
		}
	}

	cout << ans << endl;

	return 0;
}

// 50 60 70 80 90 100
