#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;
	
    reverse(s.begin(), s.end());
    int len = s.length();
    int dis = n - len;

    for (int i = 0; i < dis; i++) {
        s.push_back('o');
    }

    reverse(s.begin(), s.end());

    cout << s << endl;                                          

    return 0;
}