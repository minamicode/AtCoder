
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  string s = to_string(n);
  
  cout << s.at(1) << s.at(2) << endl;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  printf("%02d\n", n%100);

  return 0;
}
*/