#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int k;
  cin >> s >> k;
  
  int cnt = 0;
  
  sort(s.begin(), s.end());
  do {
    for (char c : s) {
      cnt++;
      if (cnt == k) {
        cout << c; 
      }
    }
  } while (next_permutation(s.begin(), s.end()));
} 

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  int k;
  cin >> s >> k;
  sort(s.begin(), s.end());
  rep(i,k-1) next_permutation(s.begin(), s.end());
  cout << s << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

set<string> st;

void dfs(string s, string cs) {
  if (cs == "") {
    st.insert(s);
    return;
  }
  rep(i,cs.size()) {
    string ncs = cs;
    ncs.erase(ncs.begin()+i);
    dfs(s+cs[i], ncs);
  }
}

int main() {
  string s;
  int k;
  cin >> s >> k;
  dfs("", s);
  vector<string> ss;
  for (string t : st) ss.push_back(t);
  sort(ss.begin(), ss.end());
  cout << ss[k-1] << endl;
  return 0;
}
*/