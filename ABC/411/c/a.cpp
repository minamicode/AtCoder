/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,q,x,s=0;
	cin >> n >> q;

	vector<int> a(n+1);
	for(int i=0;i<q;i++){
		cin >> x;
		s += (1-a[x-1])-a[x-1];
		s += (1-a[x])-a[x];
		a[x-1] = 1-a[x-1];
		a[x] = 1-a[x];
		cout << (s/2) << endl;
	}

	return 0;
}
*/