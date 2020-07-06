// Link: https://codeforces.com/problemset/problem/479/C

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  pair<int, int> dates[n];
  int i;
  for (i = 0; i < n; i++) cin >> dates[i].first >> dates[i].second;
  sort(dates, dates + n);
	int count = 0;
	for (i = 0; i < n; i++) {
		count = count <= dates[i].second ? dates[i].second : dates[i].first;
	}
	cout << count << endl;
}