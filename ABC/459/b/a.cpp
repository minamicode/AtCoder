#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    
    if (s.at(0) == 'a' || s.at(0) == 'b' || s.at(0) == 'c') {
      cout << 2;
    } else if (s.at(0) == 'd' || s.at(0) == 'e' || s.at(0) == 'f') {
      cout << 3;
    } else if (s.at(0) == 'g' || s.at(0) == 'h' || s.at(0) == 'i') {
      cout << 4;
    } else if (s.at(0) == 'j' || s.at(0) == 'k' || s.at(0) == 'l') {
      cout << 5;
    } else if (s.at(0) == 'm' || s.at(0) == 'n' || s.at(0) == 'o') {
      cout << 6;
    } else if (s.at(0) == 'p' || s.at(0) == 'q' || s.at(0) == 'r' || s.at(0) == 's') {
      cout << 7;
    } else if (s.at(0) == 't' || s.at(0) == 'u' || s.at(0) == 'v') {
      cout << 8;
    } else if (s.at(0) == 'w' || s.at(0) == 'x' || s.at(0) == 'y' || s.at(0) == 'z') {
      cout << 9;
    }
  }
  cout << endl;
  
  return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

char f(char c) {
  return "22233344455566677778889999"[c-'a'];
}

int main() {
  int n;
  string s;
  cin >> n;
  string ans;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    ans += f(s[0]);
  }
  cout << ans << endl;
  return 0;
}
*/