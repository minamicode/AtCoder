#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  
  char c1 = s[0];
  char c2 = s[2];

  int num1 = c1 - '0';
  int num2 = c2 - '0';

  if (num2 < 8) {
    cout << num1 << "-" << num2 + 1 << endl;
  } else if (num2 = 8) {
    cout << num1 + 1 << "-" << 1 << endl;
  }
  
  return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  if (s[2] == '8') s[0]++, s[2] = '1';
  else s[2]++;
  cout << s << endl;
  return 0;
}
*/