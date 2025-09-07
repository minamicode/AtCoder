#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s.at(i);
    }
  
    vector<string> t(n);
    t = s;
  
    set<string> ans;
  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
        if (i != j) {
            string temp = s.at(i) + t.at(j);
            ans.insert(temp);
        }
        }
    }
  
    cout << ans.size() << endl;
	return 0;
}