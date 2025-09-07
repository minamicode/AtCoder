#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  
  if (s1 == "sick" && s2 == "sick") {
    cout << 1 << endl;
  } else if (s1 == "sick" && s2 == "fine") {
    cout << 2 << endl;
  } else if (s1 == "fine" && s2 == "sick") {
    cout << 3 << endl;
  } else if (s1 == "fine" && s2 == "fine") {
    cout << 4 << endl;
  } 
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  int ans = 1;
  if (s1 == "fine") ans += 2;
  if (s2 == "fine") ans += 1;
  cout << ans << endl;
  return 0;
}
*/