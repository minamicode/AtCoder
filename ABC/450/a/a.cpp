#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  
  for (int i = n; i > 0; i--) {
    if (i == 1) {
      cout << i << endl;
    } else {
      cout << i << ','; 
    }
  }
  return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = n; i >= 1; i--) {
    cout << i;
    if (i != 1) cout << ',';
  }
  cout << endl;
  return 0;
}
*/