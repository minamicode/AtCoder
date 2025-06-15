#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a.at(i);
    }

    int cnt = 0;
    
    while (true) {
        bool odd = false;
        for (int i = 0; i < n; i++) {
            if (a.at(i) % 2) {
                odd = true;
            } 
        }

        if (odd) {
            break;
        }

        for (int i = 0; i < n; i++) {
            a.at(i) /= 2;
        }
        cnt++;    
    }

    cout << cnt << endl;
    return 0;
}