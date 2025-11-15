#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
	
    vector<int> vec = {a, b, c};
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    
    for (int i = 0; i < 3; i++) {
        cout << vec.at(i);
    }
    cout << endl;
	
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a < b) swap(a,b);
  if (b < c) swap(b,c);
  if (a < b) swap(a,b);
  cout << a << b << c << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(3);
  cin >> a[0] >> a[1] >> a[2];
  sort(a.begin(), a.end());
  cout << a[2] << a[1] << a[0] << endl;
  return 0;
}
*/