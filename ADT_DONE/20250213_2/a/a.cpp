#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  if (s.at(0) == s.at(1) && s.at(1) == s.at(2)) {
    cout << -1 << endl;
  } 
  
  if (s.at(0) != s.at(1) && s.at(0) != s.at(2)) {
    cout << s.at(0) << endl;
  }
  
  if (s.at(0) != s.at(1) && s.at(0) == s.at(2)) {
    cout << s.at(1) << endl;
  }
  
  if (s.at(0) == s.at(1) && s.at(0) != s.at(2)) {
    cout << s.at(2) << endl;
  }
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  sort(s.begin(), s.end());

  if (s[0] != s[1]) cout << s[0] << endl;
  else if (s[2] != s[1]) cout << s[2] << endl;
  else cout << -1 << endl;
  return 0;
}
*/