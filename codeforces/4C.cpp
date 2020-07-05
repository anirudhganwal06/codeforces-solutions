// Link: https://codeforces.com/problemset/problem/4/C

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	unordered_map<string, int> names;
	int i;
	for (i = 0; i < n; i++) {
		string name;
		cin >> name;
		if (names.find(name) == names.end()) {
			names[name] = 0;
			cout << "OK" << endl;
		} else {
			names[name]++;
			cout << name << names[name] << endl;
		}
	}
}