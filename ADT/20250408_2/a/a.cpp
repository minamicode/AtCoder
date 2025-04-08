#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;
  
  int cnt1 = 0;
  int cnt2 = 0;
  int cnt3 = 0;
  
  for (char c : n) {
    if (c == '1') {
      cnt1++;
    } else if (c == '2') {
      cnt2++;
    } else if (c == '3') {
      cnt3++;
    } else {
      cout << "No" << endl;
      return 0;
    }
  }
  
  if (cnt1 == 1 && cnt2 == 2 && cnt3 == 3) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  vector<int> cnt(10);
  for (char c : s) cnt[c-'0']++;
  if (cnt[1] == 1 && cnt[2] == 2 && cnt[3] == 3) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  if (s == "122333") cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
*/