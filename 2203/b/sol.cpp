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
	int tt;
	cin >> tt;

	while(tt--) {
		int n;
		cin >> n;

		vi digits;
		int nn = n;
		debug(nn);
		while(nn > 9) {
			digits.push_back(nn % 10);
			nn /= 10;
		}

		sort(digits.begin(), digits.end());

		int cnt = digits.size();
		int sum = nn;

		debug(nn, digits);

		int i = 0;
		while(i < digits.size() && sum + digits[i] < 10) {
			sum += digits[i];
			cnt--;
			i++;
		}

		int cnt2 = digits.size() + 1;
		sum = 1, i = 0;
		while(i < digits.size() && sum + digits[i] < 10) {
			sum += digits[i];
			cnt2--;
			i++;
		}

		cout << min(cnt, cnt2) << endl;
	}

	return 0;
}
