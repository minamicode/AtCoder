#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	string s;
	
  for (int i = 0; i < n; i++) {
    char c;
    cin >> c;
    int l;
    cin >> l;
    
    if (l <= 100) {
      for (int j = 0; j < l; j++) {
        s += c;
      } 
    } else {
      cout << "Too Long" << endl;
      break;
    }
  }
  
  if (s.size() <= 100) {
    cout << s << endl;
  } else {
    cout << "Too Long" << endl;
  }
  
	return 0;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  cin >> n;
  string ans;
  rep(i,n) {
    char c; ll l;
    cin >> c >> l;
    rep(j,l) {
      ans += c;
      if (ans.size() > 100) {
        cout << "Too Long" << endl;
        return 0;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
*/