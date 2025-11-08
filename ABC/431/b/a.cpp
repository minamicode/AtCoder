/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int x, n;
  cin >> x >> n;
  vector<int> w(n);
  rep(i,n) cin >> w[i];
  
  vector<bool> on(n);

  int q;
  cin >> q;
  rep(qi,q) {
    int p;
    cin >> p;
    p--;

    if (on[p]) {
      x -= w[p];
      on[p] = false;
    } else {
      x += w[p];
      on[p] = true;
    }

    cout << x << endl;
  }
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int x, n;
  cin >> x >> n;
  vector<int> w(n);
  rep(i,n) cin >> w[i];

  int q;
  cin >> q;
  rep(qi,q) {
    int p;
    cin >> p;
    p--;
    x += w[p];
    w[p] *= -1;
    cout << x << endl;
  }
  return 0;
}
*/