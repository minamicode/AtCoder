#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> a(9);
  for (int i = 0; i < 9; i++) {
    cin >> a.at(i);
  }
  
  vector<int> b(8);
  for (int i = 0; i < 8; i++) {
    cin >> b.at(i);
  }
  
  int cnt_a = 0;
  int cnt_b = 0;
  
  for (int i = 0; i < 9; i++) {
    cnt_a += a.at(i);
  } 
  
  for (int i = 0; i < 8; i++) {
    cnt_b += b.at(i);
  }
  
  cout << (cnt_a - cnt_b) + 1 << endl; 
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  vector<int> a(9), b(8);
  rep(i,9) cin >> a[i];
  rep(i,8) cin >> b[i];
  int s = 0, t = 0;
  rep(i,9) s += a[i];
  rep(i,8) t += b[i];
  int ans = s+1-t;
  cout << ans << endl;
  return 0;
}
*/