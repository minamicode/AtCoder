#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, t;
	cin >> s >> t;
	
	int n = s.size();
	int m = t.size();
	
	bool ok = true;
	
	for (int i = 1; i < n; i++) {
	  if (isupper(s.at(i))) {
	    if (t.find(s.at(i - 1)) == string::npos) {
	      ok = false;
	      break;
	    }
	  }
	}
	
	if (ok) {
	  cout << "Yes" << endl;
	} else {
	  cout << "No" << endl;
	}
	
	return 0;
}
