/*　解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;
    int n = s.size();
    
    for (int i = 0; i < n - 1;) {
        if(s.substr(i, 2) == "WA") {
            s[i] = 'A';
            s[i + 1] = 'C';
            if (i) i --;
        } else {
            i++;
        }
    }
  
    cout << s << endl;
    return 0;
  }
*/

/*　後ろからリプレイする場合
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;
    int n = s.size();
    
    for (int i = n - 2; i >= n - 1; --i) {
        if(s.substr(i, 2) == "WA") {
            s[i] = 'A';
            s[i + 1] = 'C';
        }
    }
  
    cout << s << endl;
    return 0;
  }
*/