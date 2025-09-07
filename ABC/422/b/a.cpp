/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i,h) cin >> s[i];

  rep(i,h)rep(j,w) {
    if (s[i][j] != '#') continue;
    int cnt = 0;
    rep(v,4) {
      int ni = i+di[v], nj = j+dj[v];
      if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
      if (s[ni][nj] == '#') cnt++;
    }
    if (cnt != 2 && cnt != 4) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}
*/