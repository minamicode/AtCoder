#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  
  vector<int> c(m);
  for (int i = 0; i < m; i++) {
    cin >> c.at(i);
  }
  
  int total = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    
    if (c.at(a - 1) >= b) {
      c.at(a - 1) -= b;
      total += b;
    } else if (c.at(a - 1) < b) {
      total += c.at(a - 1);
      c.at(a - 1) = 0;
    }
  }
  
  cout << total << endl;
  return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> c(m);
  rep(i,m) cin >> c[i];
  vector<int> sumB(m);
  rep(i,n) {
    int a, b;
    cin >> a >> b;
    a--;
    sumB[a] += b;
  }

  int ans = 0;
  rep(i,m) ans += min(c[i], sumB[i]);
  cout << ans << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> c(m);
  rep(i,m) cin >> c[i];

  int ans = 0;
  rep(i,n) {
    int a, b;
    cin >> a >> b;
    a--;
    int x = min(c[a],b);
    c[a] -= x;
    ans += x;
  }

  cout << ans << endl;
  return 0;
}
*/