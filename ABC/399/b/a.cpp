/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  
  vector<int> ans(n, -1);
  int r = 1;
  while (1) {
    int x = -1;
    rep(i, n) {
        if (ans[i] != -1) continue;
        x = max(x, p[i]);
    }
    if (x == -1) break;
    int k = 0;
    rep(i, n) {
        if (p[i] == x) {
            ans[i] = r;
            k++;
        }
    }
    r += k;
  }

  rep(i, n) {
    cout << ans[i] << endl;
  }

  return 0;
}
*/

/* 別解
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  
rep(i, n){
  int r = 1;
  rep(j, n) if (p[i] < p[j]) r++;
  cout << r << endl;
}
  return 0;
}
*/
