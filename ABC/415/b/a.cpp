#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  int n = s.size();
  vector<int> v;

  for (int i = 0; i < n; i++) {
    if (s.at(i) == '#') {
      v.push_back(i + 1);
    }
  }
  
  while (v.size() > 0) {
    cout << v.at(0) << ',' << v.at(1)  << endl;
    v.erase(v.begin(), v.begin() + 2);
  }

	return 0;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;

  auto take = [&]() {
    rep(i,s.size()) if (s[i] == '#') {
      s[i] = '.';
      return i;
    }
    return -1;
  };

  while (1) {
    int i = take();
    if (i == -1) break;
    int j = take();
    cout << i+1 << ',' << j+1 << endl;
  }
  return 0;
}
*/