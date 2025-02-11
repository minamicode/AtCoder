// 解説より

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i)

int main() {
    int n;
    cin >> n;
    set<int> s;
    rep(i, n) {
        int a;
        cin >> a;
        s.insert(a);
    }
    if (s.size() == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}