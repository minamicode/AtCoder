#include <bits/stdc++.h>
using namespace std;
int main() {
    int64_t h, w;
    cin >> h >> w;

    int64_t ans = 0;

    if (h == 1 || w == 1) {
        ans = 1;
    } else {
        if ((h * w) % 2 == 0) {
            ans = (h * w) / 2;
        } else if ((h * w) % 2 != 0) {
            ans = (h * w) / 2 + 1;
        }
    }

    cout << ans << endl;
    return 0;
}