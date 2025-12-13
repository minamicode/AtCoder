#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
	
    int sum = 0;
    
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << sum << endl;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  cout << n*(n+1)/2 << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    ans += i;
  }
  cout << ans << endl;
  return 0;
}
*/