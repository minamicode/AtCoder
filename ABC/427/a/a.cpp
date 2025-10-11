#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  
  int l = s.size();
  int m = (l + 1) / 2;
  int n = m - 1;

  cout << s.erase(n, 1) << endl;
  
  return 0;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int l = s.size();
  s.erase(s.begin() + (l/2));
  cout << s << endl;
  return 0;
}
*/