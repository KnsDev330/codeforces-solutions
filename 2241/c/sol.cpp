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
		int n;
		cin >> n;

		string ss;
		cin >> ss;

		string s = "";

		for(char c : ss) {
			if(s.empty()) s = c;
			else if(s.back() != c) {
				s.push_back(c);
			}
		}

		if(s.front() == s.back()) cout << 1 << endl;
		else cout << (s.size() <= 3 ? 2 : 1) << endl;

		debug(s);
	}

	return 0;
}
