#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    int cnt = 0;
  
    for (int i = 0; i < n - 2; i++) {
        for (int j = 1; j < n - 1; j++) {
            for (int k = 2; k < n; k++) {
                if (s.at(i) == 'A' && s.at(j) == 'B' && s.at(k) == 'C' && j - i == k - j && i < j && j < k) {
                    cnt++;    
                }
            } 
        }
    }
    cout << cnt << endl;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  int n = s.size();
  int ans = 0;
  rep(i,n)rep(j,n)rep(k,n) {
    if (i >= j || j >= k) continue;
    if (j-i != k-j) continue;
    if (s[i] != 'A') continue;
    if (s[j] != 'B') continue;
    if (s[k] != 'C') continue;
    ans++;
  }
  cout << ans << endl;
  return 0;
}
*/