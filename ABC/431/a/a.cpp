#include <bits/stdc++.h>
using namespace std;
int main() {
    int h, b;
    cin >> h >> b;
	
    if (h <= b) {
    cout << 0 << endl;
    } else {
    cout << h - b << endl;
    }
	
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, b;
  cin >> h >> b;
  if (h <= b) cout << 0 << endl;
  else cout << h-b << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, b;
  cin >> h >> b;
  cout << max(h-b, 0) << endl;
  return 0;
}
*/