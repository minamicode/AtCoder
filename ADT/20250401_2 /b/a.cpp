#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  cin >> k;
  
  if (k < 10) {
    cout << "21:0" << k << endl;
  } else if (k >= 10 && k < 60) {
    cout << "21:" << k << endl;
  } else if (k >= 60 && k < 70) {
    cout << "22:0" << k - 60 << endl;
  } else if (k >= 70 && k <= 100) {
    cout << "22:" << k - 60 << endl;
  }
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  cin >> k;
  int h = 21+k/60, m = k%60;
  printf("%02d:%02d\n", h, m);
  return 0;
}
*/