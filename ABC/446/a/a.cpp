#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    
    s.at(0) = tolower(s.at(0));
    s.insert(0, "Of");
    
    cout << s << endl;

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  s[0] += 'a'-'A';
  cout << "Of" << s << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  s[0] = tolower(s[0]);
  cout << "Of" << s << endl;
  return 0;
}
*/