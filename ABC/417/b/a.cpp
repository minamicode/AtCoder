#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }

  vector<int> b(m);
  for (int i = 0; i < m; i++) {
    cin >> b.at(i);
  }
  
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < a.size(); j++) {
      if (b.at(i) == a.at(j)) {
        a.erase(a.begin() + j);
        break;
      } else {
        continue;
      }
    }
  }
  
  for (int i = 0; i < a.size(); i++) {
    cout << a.at(i) << " ";
    cout << endl;
  }

  return 0;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  rep(i,m) {
    int b;
    cin >> b;
    auto it = find(a.begin(), a.end(), b);
    if (it == a.end()) continue;
    a.erase(it);
  }

  rep(i,a.size()) cout << a[i] << ' ';
  cout << endl;
  return 0;
}
*/