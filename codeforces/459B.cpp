// Link: https://codeforces.com/problemset/problem/459/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int n;
  cin >> n;
  long long int i, b[n];
  for (i = 0; i < n; i++) cin >> b[i];

  long long int minEle = *min_element(b, b + n);
  long long int maxEle = *max_element(b, b + n);

  if (minEle == maxEle) {
    long long int freq = 0;
    for (i = 0; i < n; i++) {
      if (b[i] == minEle) freq++;
    }
    cout << 0 << " " << freq * (freq - 1) / 2 << endl;
  } else {
    long long int minFreq = 0, maxFreq = 0;
    for (i = 0; i < n; i++) {
      if (b[i] == minEle) minFreq++;
      if (b[i] == maxEle) maxFreq++;
    }
    cout << maxEle - minEle << " " << minFreq * maxFreq << endl;
  }
}