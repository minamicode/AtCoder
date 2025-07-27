#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n + 1; i++) {
        int x = i * 108 / 100;
        if (x == n) {
            cout << i << endl;
            return 0;
        }
    }
    cout << ":(" << endl;
    return 0;
}