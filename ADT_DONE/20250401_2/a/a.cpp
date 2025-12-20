#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  
  int a = (n / 2) - 1;
  int b = (n / 2);
  int c = (n / 2) + 1;
  
  bool ok1 = false;
  bool ok2 = false;
  bool ok3 = false;
  
  if (n == 1 && s.at(0) == '/') {
    cout << "Yes" << endl;
  } else {
    for (int i = 0; i <= a; i++) {
      if (s.at(i) == '1') {
        ok1 = true;
      } 
    }
    
    if (s.at(b) == '/') {
      ok2 = true;
    } 
    
    for (int i = b + 1; i <= c; i++) {
      if (s.at(i) == '2') {
        ok3 = true;
      } 
    }
    
    if (n % 2 && ok1 && ok2 && ok3) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;
  if (n%2 == 0) {
    cout << "No" << endl;
    return 0;
  }

  int one = (n+1)/2-1;
  rep(i,one) {
    if (s[i] != '1') {
      cout << "No" << endl;
      return 0;
    }
  }
  if (s[one] != '/') {
    cout << "No" << endl;
    return 0;
  }
  rep(i,one) {
    if (s[one+1+i] != '2') {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

bool solve() {
  int n;
  string s;
  cin >> n >> s;
  if (n%2 == 0) return false;

  int one = (n+1)/2-1;
  rep(i,one) {
    if (s[i] != '1') return false;
  }
  if (s[one] != '/') return false;
  rep(i,one) {
    if (s[one+1+i] != '2') return false;
  }
  return true;
}

int main() {
  if (solve()) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

bool solve() {
  int n;
  string s;
  cin >> n >> s;

  int one = n/2;
  string t;
  t += string(one, '1');
  t += '/';
  t += string(one, '2');

  return s == t;
}

int main() {
  if (solve()) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
*/