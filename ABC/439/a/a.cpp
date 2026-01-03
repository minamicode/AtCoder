#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    int x = pow(2, n);
    int y = 2 * n;

    cout << x - y << endl;

    return 0;
}