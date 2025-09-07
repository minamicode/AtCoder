#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s.at(i);
  }
  
  int count_for = 0;
  int count_against = 0;
  
  for (int i = 0; i < n; i++) {
    if (s.at(i) == "For") {
      count_for++;
    } else if (s.at(i) == "Against") {
      count_against++;
    }
  }
  
  if (count_for > count_against) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
 
int main() {
  int n;
  cin >> n;
  int f = 0;
  rep(i, n) {
    string s;
    cin >> s;
    if (s == "For") f++;
  }
  if (f * 2 > n) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
*/