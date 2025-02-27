#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;

  vector<int> v;
  v = { a, b, c, d, e };
  
  sort(v.begin(), v.end());
  int uniqueCount = unique(v.begin(), v.end()) - v.begin();
  
  cout << uniqueCount << endl;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;

  int ans = 1;
  if (b!= a) ans++;
  if (c!= a && c!= b) ans++;
  if (d!= a && d!= b && d!= c) ans++;
  if (e!= a && e!= b && e!= c && e!= d) ans++;
  cout << ans << endl;
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(5);
  for (int i = 0; i < 5; i++) cin >> a[i];
  sort(a.begin(), a.end());

  int ans = 1;
  for (int i = 1; i < 5; i++) {
    if (a[i] != a[i - 1]) ans++;
  }
  cout << ans << endl;
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  set<int> s;
  for (int i = 0; i < 5; i++) {
    int a;
    cin >> a;
    s.insert(a);
  }
  cout << s.size() << endl;
  return 0;
}
*/