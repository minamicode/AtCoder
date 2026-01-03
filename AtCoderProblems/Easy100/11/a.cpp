#include <bits/stdc++.h>
using namespace std;

int calc(int x) {
    int ans = 0;
    while (x % 2 == 0) {
        ans++;
        x /= 2;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    int max = -1, ans = -1;
    for (int i = 1; i <= n; i++) {
        int num = calc(i);
        if (max < num) {
            max = num;
            ans = i;
        }
        
    }
    
    cout << ans << endl;
    return 0;
}