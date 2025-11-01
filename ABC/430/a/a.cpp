#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c, d;
	cin >> a >> b >> c >> d;
	
  if ((c >= a && d >= b) || c < a) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
	
  return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a <= c && d < b) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
*/
