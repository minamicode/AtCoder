#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int l, r;
  cin >> l >> r;
  
  string s = "atcoder";

  cout << s.substr(l - 1, r - (l - 1)) << endl;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
  const string s = "atcoder";
  int l, r;
  cin >> l >> r;
  string ans = s.substr(l-1, r-l+1);
  cout << ans << endl;
  return 0;
}
*/