/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;
  string t;
  for (char c : s) {
    if (c == 'a' && t != "" && t.back() == 'n') {
      t += 'y';
    }
    t += c;
  }
  cout << t << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;
  string t = regex_replace(s, regex("na"), "nya");
  cout << t << endl;
  return 0;
}
*/