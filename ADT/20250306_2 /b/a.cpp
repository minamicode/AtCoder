#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s.at(i);
  }
  
  int count = 0;

  for (int i = 0; i < n; i++) {
    if (s.at(i) == "Takahashi") {
      count++;
    }
  }
  
  cout << count << endl;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  int ans = 0;
  rep(i,n) {
    string s;
    cin >> s;
    if (s == "Takahashi") ans++;
  }
  cout << ans << endl;
  return 0;
}
*/