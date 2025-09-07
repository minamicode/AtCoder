#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    vector<int> x(q);
    for (int i = 0; i < q; i++) {
      cin >> x.at(i);
    }
    
    vector<int> b(n, 0);
    vector<int> ans(q, 0);
    
    for (int i = 0; i < q; i++) {
      if (x.at(i) >= 1) {
        b.at(x.at(i) - 1) += 1;
        ans.at(i) = x.at(i);
        
      } else if (x.at(i) == 0) {
        auto min = min_element(b.begin(), b.end());
        for (int j = 0; j < n; j++) {
          if (b.at(j) == *min) {
            b.at(j) += 1;
            ans.at(i) = j + 1;
            break;
          } 
        }
      }
      
    }
    
    // for (int i = 0; i < n; i++) {
    //   cout << b.at(i) << " ";
    // }
    // cout << endl;
    
    for (int i = 0; i < q; i++) {
      cout << ans.at(i) << " ";
    }
    return 0;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, q;
  cin >> n >> q;

  vector<int> cnt(n+1);
  rep(qi,q) {
    int x;
    cin >> x;
    if (x == 0) {
      int l = 1001001001;
      for (int i = 1; i <= n; i++) l = min(l, cnt[i]);
      for (int i = 1; i <= n; i++) {
        if (l == cnt[i]) {
          x = i;
          break;
        }
      }
    }

    cout << x << ' ';
    cnt[x]++;
  }
  cout << endl;
  return 0;
}
*/