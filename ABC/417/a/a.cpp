#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a, b;
  cin >> n >> a >> b;
  
  string s;
  cin >> s;
  
  for (int i = 0; i < a; i++) {
    s.erase(0, 1);
  }
  
  for (int i = 0; i < b; i++) {
    s.pop_back();
  }

  cout << s << endl;
  return 0;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  string s;
  cin >> n >> a >> b >> s;
  string ans = s.substr(a,n-a-b);
  cout << ans << endl;
  return 0;
}
*/