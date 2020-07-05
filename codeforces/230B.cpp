// Link: https://codeforces.com/problemset/problem/230/B

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i;
	for (i = 0; i < n; i++) {
		long long int x;
		cin >> x;
		double sr = sqrt(x);
		if (sr - floor(sr) == 0 && x != 1) {
			bool isPrime = true;
			for (int j = 2; j * j <= sr; j++) {
				if (int(sr) % j == 0) {
					isPrime = false;
					break;
				}
			}
			if (isPrime) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		} else {
			cout << "NO" << endl;
		}
	}
}