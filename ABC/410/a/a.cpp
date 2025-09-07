#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a.at(i);
    }
    cin >> k;


    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (a.at(i) >= k) {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
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
  int k;
  cin >> k;

  int ans = 0;
  rep(i,n) if (k <= a[i]) ans++;
  cout << ans << endl;
  return 0;
}
*/