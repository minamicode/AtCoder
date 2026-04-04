// TLE
#include <bits/stdc++.h>
using namespace std;
int main() {
  int q;
  cin >> q;
  
  vector<int> height;
  int tree = 0;
  for (int i = 0; i < q; i++) {
    int type;
    cin >> type;
    if (type == 1) {
      int h;
      cin >> h;
      tree++;
      height.push_back(h);
      cout << tree << endl;
    }
    if (type == 2) {
      int h;
      cin >> h;
      for (int j = 0; j < height.size(); j++) {
        if (height.at(j) <= h) {
          height.at(j) = 1000000001;
          tree--;
        }
      }
      cout << tree << endl;
    }
  }
  
  return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int Q;
  cin >> Q;
  priority_queue<int,vector<int>,greater<int>> q;
  rep(qi,Q) {
    int type, h;
    cin >> type >> h;
    if (type == 1) {
      q.push(h);
    } else {
      while (q.size() && q.top() <= h) {
        q.pop();
      }
    }
    cout << q.size() << '\n';
  }
  return 0;
}
*/