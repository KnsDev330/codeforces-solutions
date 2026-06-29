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
	ios::sync_with_stdio(0), cin.tie(0);


	int sq = sqrt(2000000000);
	for(int i = 2; i <= sq; i++) {
		bool isPrime = true;
		for(auto &x : primes) {
			if(i % x == 0) {
				isPrime = false;
				break;
			}
		}
		if(isPrime) {
			primes.push_back(i);
			mp[i] = true;
		}
	}

	// debug(primes);
	// debug(mp);

	int tt;
	cin >> tt;

	while(tt--) {
		int n;
		cin >> n;

		if(n % 2 == 0) cout << n / 2 << ' ' << n / 2 << endl;
		else if(mp[n]) cout << 1 << ' ' << n - 1 << endl;
		else {
			int rr  = 0;
			int sq  = sqrt(n);
			auto it = primes.begin();
			while(*it <= sq) {
				if(n % *it == 0) {
					rr = *it;
					break;
				}
				it++;
			}

			debug(n, rr, sq, primes.back());

			if(rr == 0) {
				cout << 1 << ' ' << n - 1 << '\n';
			}
			else {
				int lpf = n / rr;
				cout << lpf << ' ' << n - lpf << endl;
			}
		}
	}

	return 0;
}