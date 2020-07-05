// Link: https://codeforces.com/problemset/problem/489/C

#include <bits/stdc++.h>
using namespace std;

int main() {
  int m, s;
  cin >> m >> s;
  if (m * 9 < s || s == 0) {
    if (m == 1 && s == 0)
      cout << "0 0" << endl;
    else
      cout << "-1 -1" << endl;
  } else {
    int balance = s;
    for (int i = 0; i < m; i++) {
      int output;
      if (balance / 9 > (m - i - 1)) {
        output = 9;
      } else if (balance / 9 == (m - i - 1)) {
        output = balance % 9;
      } else {
        output = 0;
      }
      if (output == 0 && i == 0) output = 1;
      cout << output;
      balance -= output;
    }
    cout << " ";
    balance = s;
    for (int i = 0; i < m; i++) {
      int output = balance > 9 ? 9 : balance;
      cout << output;
      balance -= output;
    }
    cout << endl;
  }
}