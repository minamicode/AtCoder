#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, p;
    cin >> s >> p;
    
    string s2 = s + s;

    int ans = s2.find(p);

    if (ans != -1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
 }