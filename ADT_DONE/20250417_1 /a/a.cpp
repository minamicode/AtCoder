#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c;
  cin >> r >> c;
  
  vector<int> a(4);
  for (int i = 0; i < 4; i++) {
    cin >> a.at(i);
  }
  
  if (r == 1 && c == 1) {
    cout << a.at(0) << endl;
  } else if (r == 1 && c == 2) {
    cout << a.at(1) << endl;
  } else if (r == 2 && c == 1) {
    cout << a.at(2) << endl;
  } else if (r == 2 && c == 2) {
    cout << a.at(3) << endl;
  } 
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c;
  cin >> r >> c;
  int a11, a12, a21, a22;
  cin >> a11 >> a12 >> a21 >> a22;
  int ans = 0;
  if (r == 1 && c == 1) ans = a11;
  if (r == 1 && c == 2) ans = a12;
  if (r == 2 && c == 1) ans = a21;
  if (r == 2 && c == 2) ans = a22;
  cout << ans << endl;
  return 0;
}
*/
