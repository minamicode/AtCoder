#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s1, s2;
    int taro = 0, hanako = 0;

    for (int i = 0; i < n; i++) {
        cin >> s1 >> s2;
        if (s1 > s2) {
            taro += 3;
        } else if (s1 < s2) {
            hanako += 3;
        } else if (s1 == s2) {
            taro += 1;
            hanako += 1;
        }
    }
    cout << taro << " " << hanako << endl;
 }