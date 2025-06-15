#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;

  vector<int64_t> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }

  sort(a.begin(), a.end());

  int64_t min = a.at(0);
  int64_t max = a.at(n - 1);

  int64_t total = 0;
  for (int i = 0; i < n; i++) {
    total += a.at(i);
  }

  cout << min << " " << max << " " << total << endl;
}