#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  
  string ans1;
  string ans2;
  string ans3;
  int o = n / 2;
  int p = (n - 2) / 2;
  
  if (n % 2) {
    for (int i = 0; i < o; i++) {
      ans1.push_back('-'); 
    }
    ans2 = '=';
    for (int i = 0; i < o; i++) {
      ans3.push_back('-');
    } 
  } else {
    for (int i = 0; i < p; i++) {
      ans1.push_back('-'); 
    }
    ans2 = "==";
    for (int i = 0; i < p; i++) {
      ans3.push_back('-');
    }
  }
 
  cout << ans1 + ans2 + ans3 << endl; 
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  string s(n, '-');
  
  if (n % 2 == 0) {
    s[n / 2 - 1] = s[n / 2] = '=';
  } else {
    s[n / 2] = '=';
  }
 
  cout << s << endl; 
}
*/