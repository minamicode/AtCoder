#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  
  set<int> a;
  
  for (int i = 0; i < n; i++) {
    int l;
    cin >> l;
    
    string x;
    cin >> x;
    
    for (int j = 0; j < l; j++) {
      if (a.find(x.at(j)) == a.end()) {
        cout << x.at(j) << endl;
        a.insert(x.at(j));
        break;
      } else {
        cout << 0 << endl;
        break;
      }
    }
  }
  return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<bool> juice(m+1);
  rep(i,n) {
    int l;
    cin >> l;
    vector<int> x(l);
    rep(j,l) cin >> x[j];
    int k = 0;
    rep(j,l) {
      if (!juice[x[j]]) {
        k = x[j];
        break;
      }
    }
    cout << k << endl;
    juice[k] = true;
  }
  return 0;
}
*/