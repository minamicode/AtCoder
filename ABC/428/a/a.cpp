/* 解説より
#include <bits/stdc++.h>
using namespace std;
int main() {
  int s, a, b, x;
	cin >> s >> a >> b >> x;
	
  int len = 0;
	
  len += (x / (a + b)) * a; // repeats (a + b) seconds
	len += min(x % (a + b), a); // remainder
	
  int ans = len * s;
  cout << ans << "\n";
	
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  int s, a, b, x;
  cin >> s >> a >> b >> x;
  int ans = 0;
  for (int t = 0; t < x; t++) {
    // t ~ t+1
    if (t % (a+b) < a) ans += s;
  }
  cout << ans << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  int s, a, b, x;
  cin >> s >> a >> b >> x;
  int ans = (x/(a+b)*a*s) + min(x%(a+b),a)*s;
  cout << ans << endl;
  return 0;
}
*/