#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, x;
  cin >> n >> x;
  
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  
  for (int i = 0; i < n; i++) {
    if (a.at(i) < x) {
      x = a.at(i);
      cout << 1 << endl;
    } else {
      cout << 0 << endl;
    }
  }

  return 0;
}

/*
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  rep(i,n) {
    int a;
    cin >> a;
    if (a < x) {
      x = a;
      cout << 1 << endl;
    } else {
      cout << 0 << endl;
    }
  }
  return 0;
}
*/