#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a, b;
  cin >> a >> b;
  
  int x = a;
  int y = b;
  
  int i = 1;
  while (i < b) {
    x *= a;
    i++;
  }
  
  int j = 1;
  while (j < a) {
    y *= b;
    j++;
  }
 
  cout << x + y << endl;
  
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int pow(int a, int b) {
    int x = 1;
    rep(i, b) x *= a;
    return x;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << pow(a, b) + pow(b, a) << endl;
  return 0;
}
*/