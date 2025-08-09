#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
  
    string s;
    cin >> s;
  
    reverse(s.begin(), s.end());
    string t = s.substr(0, 3);

    if (t == "aet") {
        cout << "Yes" << endl; 
    } else {
        cout << "No" << endl;
    }

  return 0;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  if (n < 3) cout << "No" << endl;
  else {
    if (s.substr(n-3) == "tea") cout << "Yes" << endl;
    else cout << "No" << endl;
  }
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
  if (s.ends_with("tea")) cout << "Yes" << endl;
  else cout << "No" << endl;
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
  if (regex_match(s, regex(".*tea"))) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
*/