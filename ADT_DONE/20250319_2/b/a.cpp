#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s;
  cin >> s;
  
  int n = s.size() - 1;
  
  bool ok = false;
  
  if (s.at(0) == '<' && s.at(n) == '>') {
    for (int i = 1; i <= n - 1; i++) {
      if (s.at(i) == '=') {
        ok = true;
      } else {
        ok = false;
        break;
      }
    }
  } else {
    ok = false;
  }
  
  if (ok) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;

bool check() {
  string s;
  cin >> s;
  int n = s.size();
  if (s[0] != '<') return false;
  if (s.back() != '>') return false;
  for (int i = 1; i <= n-2; i++) {
    if (s[i] != '=') return false;
  }
  return true;
}
*/

/*
int main() {
  if (check()) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

bool check() {
  string s;
  cin >> s;
  regex re("<=+>");
  return regex_match(s, re);
}

int main() {
  if (check()) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
*/