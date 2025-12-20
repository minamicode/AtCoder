#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  
  int count = 0;
  bool include = false;
 
  for (char c : s) { 
    if (c == '|') {
      count++;
    } else {
      if (count == 1 && c == '*') {
        include = true; 
      }
    }
  }

  if (include) {
   cout << "in" << endl; 
  } else {
   cout << "out" << endl; 
  }
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
 
int main() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> x;
    int y;
    rep(i, n) {
        if (s[i] == '|') x.push_back(i);
        if (s[i] == '*') y = i;
    }
    if (x[0] < y && y < x[1]) cout << "in" << endl;
    else cout << "out" << endl;
    return 0;
}
*/