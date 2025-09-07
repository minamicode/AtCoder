#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, x, t, d;
  cin >> n >> m >> x >> t >> d;

  if (m >= x) {
    cout << t << endl;
  } else if (m < x) {
    cout << (t - x * d) + m * d << endl;
  }
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, x, t, d;
  cin >> n >> m >> x >> t >> d;
  if (x <= m) cout << t << endl;
  else {
    int z = t-d*x;
    cout << (z+d*m) << endl;
  }
  return 0;
}
*/