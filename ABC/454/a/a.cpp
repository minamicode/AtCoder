#include <bits/stdc++.h>
using namespace std;
int main() {
  int l, r;
  cin >> l >> r;
  
  int cnt = 0;
  for (int i = l; i <= r; i++) {
    cnt++;
  }
  
  cout << cnt << endl;
  return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
int main() {
  int l, r;
  cin >> l >> r;
  cout << r - l + 1 << endl;
  return 0;
}
*/
