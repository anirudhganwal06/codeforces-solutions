// Link: https://codeforces.com/problemset/problem/279/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t;
  cin >> n >> t;
  int a[n], i;
  for (i = 0; i < n; i++) cin >> a[i];

  i = 0;
  int j = 0, curr = 0, maxBooks = 0;
  while (i <= n && j <= n) {
    if (curr <= t) {
      if (maxBooks < j - i) maxBooks = j - i;
      curr += a[j++];
    } else {
      curr -= a[i++];
    }
  }
  cout << maxBooks << endl;
}