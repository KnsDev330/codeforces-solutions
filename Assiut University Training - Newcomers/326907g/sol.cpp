// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/G
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int tt;
	cin >> tt;

	while(tt--) {
		ll n, s;
		cin >> n >> s;

		ll maxSum = (n * (n + 1)) / 2;
		if(s > maxSum) {
			cout << -1 << endl;
			continue;
		}

		ll sum = 0;
		for(ll i = n; i > 0; i--) {
			if(sum + i > s) continue;
			sum += i;
			cout << i << " ";
		}

		cout << endl;
	}

	return 0;
}
