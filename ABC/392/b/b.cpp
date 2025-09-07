// 解説より

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M);
  rep(i, M) cin >> A[i];

  vector<int> ans;
  for (int i = 1; i <= N; i++) {
    bool exist = false;
    for (int na : A) {
      if (na == i) exist = true;
    }
    if (!exist) ans.push_back(i);
  }
  cout << ans.size() << endl;
  for (int x : ans) cout << x << ' ';
  cout << endl;
  return 0;
}
