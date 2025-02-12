#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t a, b;
  cin >> a >> b;
  
  int64_t x = a / b;
  
  if (a % b == 0) {
   cout << x << endl; 
  } else {
   cout << x + 1 << endl; 
  }
}

/*
解説より
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
ll a, b;
cin >> a >> b;
ll ans = (a + b - 1) / b; // 切り上げ
cout << ans << endl;
return 0;
}
*/