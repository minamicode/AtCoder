#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> d(n - 1);
    for (int i = 0; i < n - 1; i++) {
      cin >> d.at(i);
    }
    
    int acc = d.at(0);
    
    for (int i = 0; i < n - 1; i++) {
      cout << d.at(i) << " ";
      for (int j = 1; j <= n - i - 2; j++) {
        cout << acc + d.at(i + j) << " ";
        acc = acc + d.at(i + j);
      }
      cout << endl;
      
      if (i < n - 2) {
       acc = d.at(i + 1);
      }
    }
  
    return 0;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	vector<int>d(n-1);
	for(int i=0;i<n-1;i++){
		cin>>d[i];
	}

	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			int ans = 0;
			for(int k=i;k<j;k++)ans+=d[k];
			cout << ans;
			if(j<(n-1))cout << " ";
			else cout << endl;
		}
	}

	return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	vector<int>s(n);
	for(int i=1;i<n;i++){
		cin>>s[i];
		s[i]+=s[i-1];
	}

	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			cout<<(s[j]-s[i]);
			if(j<(n-1))cout<<" ";
			else cout<<endl;
		}
	}

	return 0;
}
*/