#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t a, b;
  cin >> a >> b;
  
  if (a % b) {
    cout << a / b + 1 << endl; 
  } else {
    cout << a / b << endl;
  }
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll a, b;
  cin >> a >> b;
  ll ans = (a+b-1)/b;
  cout << ans << endl;
  return 0;
}
*/