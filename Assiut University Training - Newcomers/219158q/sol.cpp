// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q
#include <bits/stdc++.h>
using namespace std;

int main() {
	float x, y;
	cin >> x >> y;

	string r = "";

	if(x == 0 && y == 0) r = "Origem";
	else if(x == 0) r = "Eixo Y";
	else if(y == 0) r = "Eixo X";
	else if(x > 0 && y > 0) r = "Q1";
	else if(x > 0 && y < 0) r = "Q4";
	else if(x < 0 && y > 0) r = "Q2";
	else r = "Q3";

	cout << r << endl;

	return 0;
}
