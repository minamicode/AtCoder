#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  for (int j = 0; j < n; j++) {
    cin >> b.at(j);
  }

  int count1 = 0;
  int count2 = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a.at(i) == b.at(j) && i == j) {
        count1++;
      } else if (a.at(i) == b.at(j) && i != j) {
        count2++;
      }
    }
  }

  cout << count1 << endl;
  cout << count2 << endl;
}
