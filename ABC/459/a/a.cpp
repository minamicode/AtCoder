#include <bits/stdc++.h>
using namespace std;
int main() {
  int x;
  cin >> x;
  
  string s = "HelloWorld";
  
  s.erase(x - 1, 1);
  
  cout << s << endl;
  
  return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;
  string s = "HelloWorld";
  s.erase(s.begin() + (x-1));
  cout << s << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;
  string s = "HelloWorld";
  for (int i = 1; i <= 10; i++) {
    if (i == x) continue;
    cout << s[i-1];
  }
  cout << endl;
  return 0;
}
*/