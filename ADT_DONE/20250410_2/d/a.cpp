#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  
  vector<int> b(n);
  copy(a.begin(), a.end(), b.begin());
  
  sort(b.begin(), b.end());
  int x = b.at(n - 2);
  
  for (int i = 0; i < n; i++) {
    if (a.at(i) == x) {
      cout << i + 1 << endl;
    }
  }
} 

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  vector<int> b = a;
  sort(b.begin(), b.end());
  int x = b[n-2];

  rep(i,n) {
    if (a[i] == x) cout << i+1 << endl;
  }
  return 0;
}
*/
