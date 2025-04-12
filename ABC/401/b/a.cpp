#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  int error = 0;
  bool login = false;
  
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s.at(i);
  }
  
  for (int i = 0; i < n; i++) {
    if (s.at(i) == "login") {
      login = true;
    } else if (s.at(i) == "logout") {
      login = false;
    } else if (s.at(i) == "private" && login == false) {
      error++;
    } 
  }
  
  cout << error << endl;
}
