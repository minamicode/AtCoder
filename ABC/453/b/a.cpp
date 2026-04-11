#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, x;
  cin >> t >> x;
  
  vector<int> a(t + 1);
  for (int i = 0; i < t + 1; i++) {
    cin >> a.at(i);
  }
  
  cout << '0' << " " << a.at(0) << endl;
  int save = a.at(0);
  for (int i = 1; i < t + 1; i++) {
    if (abs(save - a.at(i)) >= x) {
      save = a.at(i);
      cout << i << " " << a.at(i) << endl;
    } else {
      continue;
    }
  }
  
  return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int t, x;
  cin >> t >> x;

  int p = -x;
  rep(i,t+1) {
    int a;
    cin >> a;
    if (abs(a-p) >= x) {
      cout << i << ' ' << a << endl;
      p = a;
    }
  }
  return 0;
}
*/