/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  if (s[0] == '0') {
    int i = 0;
    while (s[i] == '0') i++;
    swap(s[0], s[i]);
  }
  cout << s << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

string f(int x) {
  string s = to_string(x);
  sort(s.begin(), s.end());
  return s;
}

int main() {
  int x;
  cin >> x;
  for (int n = 1;; n++) {
    if (f(n) == f(x)) {
      cout << n << endl;
      return 0;
    }
  }
  return 0;
}
*/