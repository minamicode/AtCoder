#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	
	vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }
  
    int sum = 0;
	
	for (int i = 0; i < n; i++) {
	  sum += a.at(i);
	}
	
	if (sum <= m) {
	  cout << "Yes" << endl;
	} else {
	  cout << "No" << endl;
	}
	
	return 0;
}
