/*
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  
  int ans = 0;
  
  for (int i = 0; i < n; i++) {
    ans += a.at(i);
  }
  
  cout << ans << endl;
}
*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
 
int main() {
  int n;
  cin >> n;
  int ans = 0;
  rep(i, n) {
    int a;
    cin >> a;
    ans += a;
  }
  cout << ans << endl;
  return 0;
}