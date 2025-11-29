#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    for (int i = 1; i <= m; i++) {
        double sum = 0;
        double cnt = 0;
        for(pair<int, int> p : v) {
            if (p.first == i) {
                sum += p.second;
                cnt++;
            }
        }
        double ans = sum / cnt;
        printf("%.10lf\n", ans);
        sum = 0;
        cnt = 0;
    }

    return 0;
}