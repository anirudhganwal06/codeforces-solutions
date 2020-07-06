// Link: https://codeforces.com/problemset/problem/1348/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int i, temp;
    unordered_set<int> uniqueElements;
    for (i = 0; i < n; i++) {
      cin >> temp;
      uniqueElements.insert(temp);
    }
    if (uniqueElements.size() > k) {
      cout << -1 << endl;
    } else {
      cout << k * n << endl;
      for (i = 0; i < n; i++) {
        int j = 0;
        unordered_set<int>::iterator itr = uniqueElements.begin();
        while (true) {
          cout << *itr << " ";
          j++;
					itr++;
          if (itr == uniqueElements.end()) itr = uniqueElements.begin(); 
          if (j == k) break;
        }
      }
      cout << endl;
    }
  }
}