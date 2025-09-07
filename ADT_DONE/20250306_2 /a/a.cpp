#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    cout << (char)toupper(s[i]);
  }
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  string t;
  rep(i,s.size()) t += toupper(s[i]);
  cout << t << endl;
  return 0;
}
*/