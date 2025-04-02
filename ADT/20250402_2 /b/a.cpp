#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  
  int64_t ans = pow(a, b);
  
  cout << ans << endl;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int a, b;
  cin >> a >> b;
  int ans = 1;
  rep(i,b) ans *= a;
  cout << ans << endl;
  return 0;
}
*/