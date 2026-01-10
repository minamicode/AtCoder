#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;

    int z = 1;
    for (int i = 0; i < y; i++) {
        z *= 2;
    }

    cout << x * z << endl;
    return 0;
}