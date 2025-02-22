#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s;
  cin >> s;
  
  int count = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s.at(i) == '2') {
      count++;
    }
  }

  for (int i = 0; i < count; i++) {
    cout << '2';
    } 
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s;
  cin >> s;
  string ans;
  for (char c : s) {
    if (c == '2') ans += '2';
  }
  cout << ans << endl;
  return 0;  
}
*/