#include <bits/stdc++.h>
using namespace std;
int main() {
  double d;
  cin >> d;
  
  double pi = 3.141592653589793;
  double r = d / 2;
  double s = pi * r * r;
  
  cout << fixed << setprecision(10);
  cout << s << endl;

  return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
int main() {
	int d;
	cin >> d;
	cout << fixed << setprecision(20) << M_PI * d * d / 4 << endl;
	return 0;
}
*/