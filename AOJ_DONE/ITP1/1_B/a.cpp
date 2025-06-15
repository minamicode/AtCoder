#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int x;
  cin >> x;
  
  int ans = 1;
  
  int i = 0;
  while (i < 3) {
  ans = ans * x;
  i++;
}

  cout << ans << endl;
}

/*
#include <iostream>
using namespace std;

int main(){
	int x;
	cin >> x;
	cout << (x*x*x) << endl;
	return 0;
}
*/