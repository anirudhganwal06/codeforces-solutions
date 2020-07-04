// Link: https://codeforces.com/problemset/problem/489/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, i, j;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> m;
  int b[m];
  for (i = 0; i < m; i++) {
    cin >> b[i];
  }
  sort(a, a + n);
  sort(b, b + m);
  i = 0, j = 0;
  int count = 0;
  while (i < n && j < m) {
    if (abs(a[i] - b[j]) <= 1) {
      i++, j++, count++;
    } else {
      a[i] < b[j] ? i++ : j++;
    }
  }
	cout << count << endl;
}