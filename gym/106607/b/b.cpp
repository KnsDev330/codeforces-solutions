#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../../../debug.h"
#else
#define debug(...)
#endif

void solve() {
	int n;
	cin >> n;

	set<int> s;
	vector<int> a(n);
	for(auto &x : a) {
		cin >> x;
		s.insert(x);
	}

	if(s.size() == 1 && *s.begin() == 1) cout << 0 << endl;
	else if(s.size() >= 3) cout << 2 << endl;
	else {
		int non1blocks = 0;

		bool non1started = false;
		for(int i = 0; i < n; i++) {
			if(a[i] != 1) {
				if(!non1started) {
					non1blocks++;
					non1started = true;
				}
			}
			else {
				non1started = false;
			}
		}

		cout << (non1blocks > 1 ? 2 : 1) << endl;

		debug(non1blocks);
	}
}

int main() {
	int tt;
	cin >> tt;

	while(tt--)
		solve();

	return 0;
}
