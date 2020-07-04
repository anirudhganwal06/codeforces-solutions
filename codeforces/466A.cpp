// Link: https://codeforces.com/problemset/problem/466/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  int total = 0;
  if (a * m <= b) {
    total = a * n;
  } else {
    total = (n / m) * b;
    if ((n % m) * a > b) {
      total += b;
    } else {
      total += (n % m) * a;
    }
  }
  cout << total << endl;
}