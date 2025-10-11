/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int f(int x) {
  int res = 0;
  while (x) {
    res += x%10;
    x /= 10;
  }
  return res;
}

int main() {
  int n;
  cin >> n;

  vector<int> a(n+1);
  a[0] = 1;

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < i; j++) {
      a[i] += f(a[j]);
    }
  }

  cout << a[n] << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int f(int x) {
  int res = 0;
  for (char c : to_string(x)) res += c-'0';
  return res;
}

int main() {
  int n;
  cin >> n;

  vector<int> a(n+1);
  a[0] = 1;

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < i; j++) {
      a[i] += f(a[j]);
    }
  }

  cout << a[n] << endl;
  return 0;
}
*/