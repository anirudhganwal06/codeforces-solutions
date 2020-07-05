// Link: https://codeforces.com/problemset/problem/520/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int countM = 0;
  while (true) {
    if (n >= m) break;
    n *= 2;
    countM++;
  }
  int diff = n - m;
  int count = countM;
  for (int i = 0; i < 15; i++) {
    if (diff >> i & 1) {
			if (i <= countM) count++;
			else count += (1 << (i - countM));
		}
  }
	cout << count << endl;
}