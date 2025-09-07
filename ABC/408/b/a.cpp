#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  set<int> a;
  
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.insert(x);
  }
  
  cout << a.size() << endl;
  for (auto x : a) {
  cout << x << " ";
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
  sort(a.begin(), a.end());
  a.erase(unique(a.begin(), a.end()), a.end());
  cout << a.size() << endl;
  rep(i,a.size()) cout << a[i] << ' ';
  cout << endl;
  return 0;
}
*/