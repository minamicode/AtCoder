#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int m, h;
    
    while (s != "-") {
        cin >> m;
        for (int i = 0; i < m; i++) {
            cin >> h;
            s = s.substr(h, s.size() - h) + s.substr(0, h); 
        }
        cout << s << endl;
        cin >> s;
    }
 }