#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a;
  cin >> a;
  
  if (400 % a) {
    cout << -1 << endl;
  } else {
    cout << 400 / a << endl;
  }
}