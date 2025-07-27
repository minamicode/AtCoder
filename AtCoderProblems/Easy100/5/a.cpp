#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, c;
    cin >> n >> m >> c;

    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b.at(i);
    }

    int sum = 0;
    int cnt = 0;

    while (n) {
        vector<int> a(m);
        for (int i = 0; i < m; i++) {
            cin >> a.at(i);
        }

        for (int i = 0; i < m; i++) {
            sum += b.at(i) * a.at(i);
        }

        if (sum + c > 0) {
            cnt++;
        }

        n--;
        sum = 0;
    }

    cout << cnt << endl;
    return 0;
}