#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x.at(i);
    }

    int ans = 1000000000;

    for (int p = 1; p <= 100; p++) {
        int temp = 0;
        for (int i = 0; i < n; i++) {
            temp += (x.at(i) - p) * (x.at(i) - p);
        }
        ans = min(ans, temp);
    }
    cout << ans << endl;
    return 0;
}