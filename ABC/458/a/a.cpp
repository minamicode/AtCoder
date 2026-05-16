#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  int n;
  cin >> s >> n;
  
  for (int i = 0; i < n; i++) {
    s.pop_back();
  }
  
  s.erase(0, n);
  
  cout << s << endl;
  
  return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int n;
  cin >> s >> n;
  string ans = s.substr(n, s.size() - n*2);
  cout << ans << endl;
  return 0;
}
*/