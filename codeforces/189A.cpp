// Link: https://codeforces.com/problemset/problem/189/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[3];
  int i, j;
  for (i = 0; i < 3; i++) cin >> a[i];
	
  sort(a, a + 3);
  int freq0 = n / a[0];
  int balance = n % a[0];
  int currMax = 0;
  while (true) {
    for (i = balance / a[1]; i >= 0; i--) {
      if ((balance - i * a[1]) % a[2] == 0) {
        int sum = freq0 + i + (balance - i * a[1]) / a[2];
        if (sum > currMax) {
          currMax = sum;
        }
      }
    }
    if (freq0 > 0) {
      freq0--;
      balance += a[0];
    } else {
      break;
    }
  }
  cout << currMax << endl;
}