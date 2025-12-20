#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;
	
    reverse(s.begin(), s.end());
    int len = s.length();
    int dis = n - len;

    for (int i = 0; i < dis; i++) {
        s.push_back('o');
    }

    reverse(s.begin(), s.end());

    cout << s << endl;                                          

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;

  while (s.size() < n) {
    s = "o" + s;
  }
  cout << s << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;
  s = (string(n,'o') + s).substr(s.size());
  cout << s << endl;
  return 0;
}
*/