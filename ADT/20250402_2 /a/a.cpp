#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  int n = s.size();
  int p = 0;
  
  for (int i = n - 1; i >= 0; i--) {
    if (s.at(i) == '.') {
      p = i;
      break;
    }
  }
  
  for (int i = p + 1; i < n; i++) {
    cout << s.at(i);
  }
}

/*　解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  int pi = -1;
  rep(i,s.size()) {
    if (s[i] == '.') pi = i;
  }
  string ans = s.substr(pi+1);
  cout << ans << endl;
  return 0;
}
*/