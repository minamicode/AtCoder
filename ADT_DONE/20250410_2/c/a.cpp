#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  int m = n * 2;
  
  vector<int> a(m);
  for (int i = 0; i < m; i++) {
    cin >> a.at(i);
  }
  
  int cnt = 0;

  for (int i = 0; i < m - 2; i++) {
    if (a.at(i) == a.at(i + 2)) {
      cnt++;
    }
  }
  
  cout << cnt << endl;
} 

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  int n2 = n*2;
  vector<int> a(n2);
  rep(i,n2) cin >> a[i];
  int ans = 0;
  rep(i,n2-2) {
    if (a[i] == a[i+2]) ans++;
  }
  cout << ans << endl;
  return 0;
}
*/