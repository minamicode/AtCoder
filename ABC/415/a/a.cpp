#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  
  bool ok = false;
  
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    
    if (x == a.at(i)) {
      ok = true;
      break;
    }
  }
  
  if (ok) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

	return 0;
}
