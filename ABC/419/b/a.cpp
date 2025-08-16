#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;

  vector<int> v;
  
  for (int i = 0; i < q; i++) {
    int type;
    cin >> type;
    if (type == 1) {
      int x;
      cin >> x;
      v.push_back(x);
    }
    if (type == 2) {
      int y = *min_element(v.begin(), v.end());
      cout << y << endl;
      for (int j = 0; j < v.size(); j++) {
        if (v.at(j) == y) {
          v.erase(v.begin() + j);
          break;
        }
      }
    }
  }
  return 0;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int Q;
  cin >> Q;

  vector<int> a;
  rep(qi,Q) {
    int type;
    cin >> type;
    if (type == 1) {
      int x;
      cin >> x;
      a.push_back(x);
    }
    if (type == 2) {
      auto it = min_element(a.begin(), a.end());
      cout << *it << endl;
      a.erase(it);
    }
  }
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int Q;
  cin >> Q;

  priority_queue<int,vector<int>,greater<int>> q;
  rep(qi,Q) {
    int type;
    cin >> type;
    if (type == 1) {
      int x;
      cin >> x;
      q.push(x);
    }
    if (type == 2) {
      cout << q.top() << endl;
      q.pop();
    }
  }
  return 0;
}
*/