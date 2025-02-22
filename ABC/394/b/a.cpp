#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s.at(i);
  }
  
  sort(s.begin(),s.end(),[](string & s1, string& s2) {return s1.size() < s2.size();} );
  
  for (int i = 0; i < n; i++) {
    cout << s.at(i);
  }
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
 
int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  
  sort(s.begin(), s.end(), [&](string a, string b){
    return a.size() < b.size();
  });
  string ans;
  for (string ns : s) ans += ns;
  cout << ans << endl;
  return 0;
}
*/