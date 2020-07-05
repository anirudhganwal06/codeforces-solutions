// Link: https://codeforces.com/problemset/problem/327/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n], i;
  for (i = 0; i < n; i++) cin >> a[i];

  int cumulativeSum[n + 1] = {0};
  for (i = 1; i <= n; i++) cumulativeSum[i] = cumulativeSum[i - 1] + a[i - 1];

  int highestDifference = INT_MIN;
  for (i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      int difference = j - i + 1 - 2 * (cumulativeSum[j + 1] - cumulativeSum[i]);
      if (highestDifference < difference) {
        highestDifference = difference;
      }
    }
  }
  cout << cumulativeSum[n] + highestDifference << endl;
}