/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> c(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i] >> c[i];
    }

    sort(s.begin(), s.end());

    int sum_rating = 0;
    for (const int e : c) {
        sum_rating += e;
    }
    const int winner = sum_rating % n;

    cout << s[winner] << endl;
}
*/