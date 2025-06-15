
/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, k, q;
  cin >> n >> k >> q;
 
  vector<int> a(k);
  rep (i, k) cin >> a[i];
  a.push_back(n + 1);
  rep (qi,q) {
    int l;
    cin >> l;
    l--;
    
    if (a[l]+1 == a[l+1]) continue;
    a[l]++;
  }
  rep (i, k) cout << a[i] << endl;
  
  return 0;
}
*/