/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using P = pair<int,int>;

int main() {
  int n, m;
  cin >> n >> m;
  int ans = 0;
  set<P> edges;
  rep(i,m) {
    int a, b;
    cin >> a >> b;
    if (a == b) {
      ans++;
      continue;
    }
    if (a > b) swap(a,b);
    if (edges.count(P(a,b))) {
      ans++;
      continue;
    }
    edges.emplace(a,b);
  }
  cout << ans << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using P = pair<int,int>;

int main() {
  int n, m;
  cin >> n >> m;
  set<P> edges;
  rep(i,m) {
    int a, b;
    cin >> a >> b;
    if (a == b) continue;
    if (a > b) swap(a,b);
    if (edges.count(P(a,b))) continue;
    edges.emplace(a,b);
  }
  int ans = m-edges.size();
  cout << ans << endl;
  return 0;
}
*/