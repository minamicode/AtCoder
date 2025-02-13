#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  if (s.at(0) == s.at(1) && s.at(1) == s.at(2)) {
    cout << -1 << endl;
  } 
  
  if (s.at(0) != s.at(1) && s.at(0) != s.at(2)) {
    cout << s.at(0) << endl;
  }
  
  if (s.at(0) != s.at(1) && s.at(0) == s.at(2)) {
    cout << s.at(1) << endl;
  }
  
  if (s.at(0) == s.at(1) && s.at(0) != s.at(2)) {
    cout << s.at(2) << endl;
  }
}
