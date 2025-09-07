#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s.at(i);
  }

  reverse(s.begin(), s.end());

  for (int i = 0; i < n; i++) {
    cout << s.at(i) << endl;
  }
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i,n) cin >> s[i];
  reverse(s.begin(), s.end());
  rep(i,n) cout << s[i] << endl;
  return 0;
}
*/