/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  int cnt1 = 0;
  int cnt2 = 0;
  
  for (char c : s) {
    if ((int)c >= 65 && (int)c <= 90) {
      cnt1++;
    } else {
      cnt2++;
    }
  }
  
  if (cnt1 < cnt2) {
    for (char c : s) {
      cout << (char)tolower(c);
    }
  } else if (cnt1 > cnt2) {
    for (char c : s) {
      cout << (char)toupper(c);
    }
  }
  
}
*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  int u = 0, l = 0;
  for (char c : s) {
    if (islower(c)) l++; else u++;
  }
  if (u > l) {
    for (char& c : s) c = toupper(c);
  } else {
    for (char& c : s) c = tolower(c);
  }
  cout << s << endl;
  return 0;
}
