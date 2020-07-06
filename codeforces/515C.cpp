// Link: https://codeforces.com/problemset/problem/515/C

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string input;
  cin >> input;
  int primes[] = {2, 3, 5, 7}, i, j, freqPrimes[4] = {0};

  for (i = 0; i < n; i++) {
    int digit = input[i] - '0';
    for (j = 3; j >= 0; j--) {
      if (digit >= primes[j]) {
        freqPrimes[j]++;
        int num = 1;
        for (int k = primes[j] + 1; k <= digit; k++) {
          num *= k;
        }
        while (num != 1) {
          if (num % 6 == 0) {
            freqPrimes[1]++;
            num /= 6;
          } else if (num % 2 == 0) {
            freqPrimes[0]++;
            num /= 2;
          }
        }
        break;
      }
    }
  }
  for (i = 3; i >= 0; i--) {
    for (j = 0; j < freqPrimes[i]; j++) {
      cout << primes[i];
    }
  }
  cout << endl;
}