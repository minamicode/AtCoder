#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n, m;
  cin >> n >> m;
  
  vector<int> a;
  int64_t x = 1;
  int64_t ans = 1;
  
  for (int i = 0; i < m; i++) {
    x *= n;
    a.push_back(x);
  }
  
  for (int i = 0; i < m; i++) {
    ans += a.at(i);
  }
  
  if (0 < ans && ans <= 1000000000) {
    cout << ans << endl;
  } else {
    cout << "inf" << endl;
  }
  
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  const ll inf = 1e9;
  int n, m;
  cin >> n >> m;
  ll ans = 0;
  ll x = 1;
  rep(i,m+1) {
    ans += x;
    x *= n;
    if (ans > inf) {
      cout << "inf" << endl;
      return 0;
    }
  }
  cout << ans << endl;
  return 0;
}
*/
