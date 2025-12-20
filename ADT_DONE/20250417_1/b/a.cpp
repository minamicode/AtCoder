#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  
  set<int> b(a.begin(), a.end());
  
  if (b.size() == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  set<int> s;
  rep(i,n) {
    int a;
    cin >> a;
    s.insert(a);
  }
  if (s.size() == 1) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
*/