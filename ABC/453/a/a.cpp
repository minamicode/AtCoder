#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  
  string s;
  cin >> s;
  
  bool top = true;
  
  if (s.at(0) == 'o') {
    for (int i = 1; i < n; i++) {
      if (s.at(i - 1) == 'o' && s.at(i) == 'o' && top) {
        continue;
      } else {
        cout << s.at(i);
        top = false;
      }
    }
  } else {
    cout << s;
  }
  cout << endl;
  return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  while (s[0] == 'o') {
    s.erase(s.begin());
  }
  cout << s << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  while (s.size() > 0 && s[0] == 'o') {
    s.erase(s.begin());
  }
  cout << s << endl;
  return 0;
}
*/