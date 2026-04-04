#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  
  int len = s.size();

  if (len % 5) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }

  return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  if (s.size()%5 == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
*/