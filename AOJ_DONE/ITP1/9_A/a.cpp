#include <bits/stdc++.h>
using namespace std;

int main() {
    string w, t;
    cin >> w >> t;
    
    int cnt = 0;
    
    for (int i = 0; i < w.size(); i++) {
        if (w[i] >= 'A' && w[i] <= 'Z') {
            w[i] += 'a' - 'A';
        }
    }

    while (t != "END_OF_TEXT") {
        for (int i = 0; i < t.size(); i++) {
            if (t[i] >= 'A' && t[i] <= 'Z') {
                t[i] += 'a' - 'A';
            }
        }

        if (w == t) {
            cnt++;
        }
        
        cin >> t;
    }
    cout << cnt << endl;
 }