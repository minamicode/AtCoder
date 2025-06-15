#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  
  if (a < c) {
    cout << "Takahashi" << endl;
  } else if (a > c) {
    cout << "Aoki" << endl;
  } if (a == c) {
    if (b < d) {
      cout << "Takahashi" << endl;
    } else if (b > d) {
      cout << "Aoki" << endl;
    } else if (b == d) {
      cout << "Takahashi" << endl;
    }
  }
  
} 

/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  b += a*60;
  d += c*60;
  if (b <= d) cout << "Takahashi" << endl;
  else cout << "Aoki" << endl;
  return 0;
}
*/