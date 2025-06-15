#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t n, m, p;
  cin >> n >> m >> p;
  
  if (n - m > 0) {
    cout << (n - m) / p + 1 << endl;
  } else if (n == m) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m, p;
  cin >> n >> m >> p;
  int i = m;
  int ans = 0;
  while (i <= n) {
    ans++;
    i += p;
  }
  cout << ans << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m, p;
  cin >> n >> m >> p;
  int ans = (n+(p-m))/p;
  cout << ans << endl;
  return 0;
}
*/
