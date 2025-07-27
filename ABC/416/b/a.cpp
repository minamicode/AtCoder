/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  if (s[0] == '.') s[0] = 'o';
  rep(i,s.size()-1) {
    if (s.substr(i,2) == "#.") s[i+1] = 'o';
  }
  cout << s << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  bool done = false;
  rep(i,s.size()) {
    if (s[i] == '#') {
      done = false;
    } else {
      if (!done) {
        s[i] = 'o';
        done = true;
      }
    }
  }
  cout << s << endl;
  return 0;
}
*/