#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  
  vector<string> w(n);
  for (int i = 0; i < n; i++) {
    cin >> w.at(i);
  }
  
  bool ans = false;
  
  for (int i = 0; i < n; i++) {
    if (w.at(i) == "and" || w.at(i) == "not" || w.at(i) == "that" || w.at(i) == "the" || w.at(i) == "you") {
      ans = true;
      break;
    } 
  }
  
  if (ans == true) {
    cout << "Yes" << endl;    
  } else {
    cout << "No" << endl; 
  }
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
 
int main() {
  int n;
  cin >> n;
  vector<string> w(n);
  rep (i, n) cin >> w[i];
  vector<string> words = {"and", "not", "that", "the", "you"};
  bool ok = false;
  rep (i, n){
    for (string word : words) if (word == w[i]) ok = true;
  }  
  if (ok) cout << "Yes" << endl;    
  else cout << "No" << endl; 
  return 0;
}
*/