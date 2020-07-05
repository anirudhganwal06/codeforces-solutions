// Link: https://codeforces.com/problemset/problem/25/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n], i;
  for (i = 0; i < n; i++) cin >> a[i];

  int evenCount = 0;
  for (i = 0; i < 3; i++) {
    if (a[i] % 2 == 0) evenCount++;
  }
  bool mostAreEven = false;
  if (evenCount > 1) mostAreEven = true;
  for (i = 0; i < n; i++) {
    if (mostAreEven && a[i] % 2 == 1) {
      cout << i + 1 << endl;
      break;
    } else if (!mostAreEven && a[i] % 2 == 0) {
      cout << i + 1 << endl;
      break;
    }
  }
}