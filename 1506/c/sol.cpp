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


int main() {
	ios::sync_with_stdio(0), cin.tie(0);

	int tt;
	cin >> tt;

	while(tt--) {
		string a, b;
		cin >> a >> b;

		int ans = 0;

		for(int i = 0; i < a.size(); i++) {
			for(int j = 0; j < b.size(); j++) {
				int ii = i, jj = j;
				while(ii < a.size() && jj < b.size() && a[ii] == b[jj])
					ii++, jj++;
				ans = max(ans, jj - j);
			}
		}

		cout << (a.size() + b.size() - ans * 2) << endl;
	}

	return 0;
}