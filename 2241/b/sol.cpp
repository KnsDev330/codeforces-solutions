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


int digits(int num) {
	bool a[10] = {0};

	while(num) {
		a[num % 10]  = true;
		num         /= 10;
	}

	int cnt = 0;
	for(auto &x : a)
		if(x) cnt++;
	return cnt;
}

signed main() {
	ios::sync_with_stdio(0), cin.tie(0);

	set<int> s;
	s.insert(1000000000);

	for(int i = 2; i < 10; i++)
		s.insert(i);

	for(int i = 2; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			for(int k = 0; k < 10; k++) {
				int msk = 1 << (i + 1);
				for(int l = 0; l <= msk; l++) {
					int num = 0;
					for(int m = 0; m <= i; m++) {
						int which = l & (1 << m);

						if(which) num = (j * pow(10, m)) + num;
						else num = (k * pow(10, m)) + num;
					}
					if(num >= 2 && num <= 1000000000) {
						s.insert(num);
					}
				}
			}
		}
	}

	debug(s.size());

	// set<int> ss;
	// for(auto &x : s) {
	// 	for(auto &y : s) {
	// 		int multi = x * y;
	// 		if(digits(multi) <= 2) {
	// 			ss.insert(multi);
	// 		}
	// 	}
	// }
	// debug(ss);
	// debug(ss.size());

	int a[s.size()];
	int ii = 0;
	for(auto &x : s)
		a[ii++] = x;
	sort(a, a + s.size());

	int tt;
	cin >> tt;

	while(tt--) {
		int n;
		cin >> n;

		for(auto &x : a) {
			int multi = n * x;
			if(digits(multi) <= 2) {
				cout << x << endl;
				break;
			}
		}
	}

	return 0;
}
