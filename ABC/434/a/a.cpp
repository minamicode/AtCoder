#include <bits/stdc++.h>
using namespace std;
int main() {
    int w, b;
    cin >> w >> b;
	
    int w1 = w * 1000;
    int n = w1 / b;

    cout << n + 1 << endl;
    return 0;
}