#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  
  if (1 <= n && n <= 125) {
    cout << 4 << endl;
  } else if (126 <= n && n <= 211) {
    cout << 6 << endl;
  } else if (212 <= n && n <= 214) {
    cout << 8 << endl;
  }  
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  if (n <= 125) cout << 4 << endl;
  else if (n <= 211) cout << 6 << endl;
  else cout << 8 << endl;
  return 0;
}
*/