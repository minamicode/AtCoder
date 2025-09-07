#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int64_t x;
  cin >> x;
  
  int64_t a = (x + 10 - 1) / 10; 
  int64_t b = x / 10;
  
  if (x < 0) {
    cout <<  b << endl;
  } else {
    cout << a << endl; 
  }

}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll x;
  cin >> x;
  ll ans;
  if (x >= 0) ans = (x+9)/10;
  else ans = x/10;
  cout << ans << endl;
  return 0;
}
*/