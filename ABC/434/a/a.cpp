#include <bits/stdc++.h>
using namespace std;
int main() {
    int w, b;
    cin >> w >> b;
	
    int w1 = w * 1000;
    int n = w1 / b;

    cout << n + 1 << endl;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int w, b;
  cin >> w >> b;
  int a = w*1000;
  cout << (a/b+1) << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int w, b;
  cin >> w >> b;
  int a = w*1000;
  int n = 1;
  while (n*b <= a) n++;
  cout << n << endl;
  return 0;
}
*/