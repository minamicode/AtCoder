#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> p(26);
  for (int i = 0; i < 26; i++) {
    cin >> p.at(i);
  }
  
  string s;
  s = "abcdefghijklmnopqrstuvwxyz";
  
  for (int i = 0; i < 26; i++) {
    int j = p.at(i) - 1;
    cout << s.at(j);
  }
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n = 26;
  vector<int> p(n);
  rep(i,n) cin >> p[i];
  string ans;
  rep(i,n) ans += 'a'+(p[i]-1);
  cout << ans << endl;
  return 0;
}
*/