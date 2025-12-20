#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a, b;
  cin >> a >> b;
  
  int x = 32;
  int y = a - b;
  
  int ans = pow(x, y);
  
  
  cout << ans << endl;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a, b;
  cin >> a >> b;
  // 32 ** (a - b) = 2 ** ((a - b) * 5)
  int ans = 1 << ((a - b) * 5);
  cout << ans << endl;
  return 0;
}
*/