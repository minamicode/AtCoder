#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
	cin >> n >> m;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }

	int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a.at(i);
  }

  int x = sum - m;
  bool ok = false;

  for (int i = 0; i < n; i++) {
    if (a.at(i) == x) {
      ok = true;
      break;
    }
  }
  
  if (ok) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  rep(i,n) {
    int sum = 0;
    rep(j,n) {
      if (i != j) sum += a[j];
    }
    if (sum == m) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}
*/