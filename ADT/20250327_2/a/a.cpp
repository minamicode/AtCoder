#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if (a == b) {
    cout << -1 << endl;
  } else if (a == 1 && b == 2) {
    cout << 3 << endl;
  } else if (a == 2 && b == 3) {
    cout << 1 << endl;
  } else if (a == 3 && b == 1) {
    cout << 2 << endl;
  } else if (a == 2 && b == 1) {
    cout << 3 << endl;
  } else if (a == 3 && b == 2) {
    cout << 1 << endl;
  } else if (a == 1 && b == 3) {
    cout << 2 << endl;
  }
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if (a == b) {
    cout << -1 << endl;
  } else {
    if (a > b) swap(a,b);
    if (a == 2 && b == 3) cout << 1 << endl;
    if (a == 1 && b == 3) cout << 2 << endl;
    if (a == 1 && b == 2) cout << 3 << endl;
  }
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if (a == b) {
    cout << -1 << endl;
  } else {
    cout << (a^b) << endl;
  }
  return 0;
}
*/