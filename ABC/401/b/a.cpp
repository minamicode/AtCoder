#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  int error = 0;
  bool login = false;
  
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s.at(i);
  }
  
  for (int i = 0; i < n; i++) {
    if (s.at(i) == "login") {
      login = true;
    } else if (s.at(i) == "logout") {
      login = false;
    } else if (s.at(i) == "private" && login == false) {
      error++;
    } 
  }
  
  cout << error << endl;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  bool login = false;
  int ans = 0;
  rep(i,n) {
    string s;
    cin >> s;
    if (s == "login") login = true;
    if (s == "logout") login = false;
    // if (s == "public");
    if (s == "private" && !login) ans++;
  }
  cout << ans << endl;
  return 0;
}
*/