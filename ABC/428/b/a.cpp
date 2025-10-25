/* 解説より
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k;
	string s;
	cin >> n >> k;
	cin >> s;
	
	map<string, int> memo;
	for (int i = 0; i < n-k+1; i++) {
		string t = s.substr(i, k);
		memo[t] += 1;
	}
	
	int vmax = 0;
	for (auto &[key, val] : memo) {
		vmax = max(vmax, val);
	}
	
	vector<string> vs;
	for (auto &[key, val] : memo) {
		if (val == vmax) vs.push_back(key);
	}
	
	cout << vmax << "\n";
	for (int i = 0; i < vs.size(); i++) {
		if (i > 0) cout << " ";
		cout << vs[i];
	}
	cout << "\n";
	return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n,k;
  cin >> n >> k;
  string s;
  cin >> s;

  map<string,int> cnt;
  rep(si,n-k+1) {
    string t = s.substr(si,k);
    cnt[t]++;
  }

  int x = 0;
  for (auto p : cnt) {
    x = max(x, p.second);
  }
  cout << x << endl;

  for (auto p : cnt) {
    if (p.second == x) cout << p.first << endl;
  }
  return 0;
}
*/