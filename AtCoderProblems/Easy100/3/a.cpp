#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i < n; i++) {
        if (s.at(i) == 'a') {
            if (cnt1 < a + b) {
                cout << "Yes" << endl;
                cnt1++;    
            } else {
                cout << "No" << endl;
            }
        } else if (s.at(i) == 'b') {
            if (cnt1 < a + b && cnt2 < b) {
                cout << "Yes" << endl;
                cnt1++;
                cnt2++;    
            } else {
                cout << "No" << endl;
            }
        } else if (s.at(i) == 'c') {
            cout << "No" << endl;
        }
    }
    return 0;
}