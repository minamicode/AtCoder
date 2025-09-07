#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(10);
  for (int i = 0; i < 10; i++) {
    cin >> a.at(i);
  }
  
  int x = a.at(0);
  int y = a.at(x);
  int z = a.at(y);
  
  cout << z << endl;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[10];
  for (int i = 0; i < 10; i++) {
    cin >> a[i];
  }
  int ans = 0;
  for (int i = 0; i < 3; i++) {
    ans = a[ans];
  }
  cout << ans << endl;
  return 0;
}
*/