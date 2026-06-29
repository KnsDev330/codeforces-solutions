#ifndef DEBUG_H
#define DEBUG_H

#include <bits/stdc++.h>
using namespace std;

template <typename T>
void __print(const T &v) {
	cerr << v;
}

void __print(const string &s) {
	cerr << "\"" << s << "\"";
}
void __print(const char *s) {
	cerr << "\"" << s << "\"";
}
void __print(char s) {
	cerr << "'" << s << "'";
}
void __print(bool s) {
	cerr << (s ? "true" : "false");
}

template <typename T>
void __print(const set<T> &s) {
	cerr << '{';
	for(auto &i : s) {
		__print(i);
		cerr << ", ";
	}
	cerr << '}';
}

template <typename T>
void __print(const multiset<T> &s) {
	cerr << '{';
	for(auto &i : s) {
		__print(i);
		cerr << ", ";
	}
	cerr << '}';
}

template <typename T, typename U>
void __print(const pair<T, U> &s) {
	cerr << '{';
	__print(s.first);
	cerr << ", ";
	__print(s.second);
	cerr << '}';
}

template <typename T, typename U>
void __print(const vector<T, U> &s) {
	cerr << '[';
	for(auto &i : s) {
		__print(i);
		cerr << ", ";
	}
	cerr << ']';
}

template <typename T, typename U>
void __print(const map<T, U> &s) {
	cerr << '[';
	for(auto &i : s) {
		__print(i);
		cerr << ", ";
	}
	cerr << ']';
}


void _debug() {
	cerr << '\n';
}

template <typename T, typename... Args>
void _debug(T t, Args... args) {
	__print(t);

	if constexpr(sizeof...(args)) cerr << ", ";
	_debug(args...);
}

#define debug(...) cerr << "[" << #__VA_ARGS__ << "] = ", _debug(__VA_ARGS__)

#endif