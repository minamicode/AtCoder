#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n != 0) {
        double s[1000] = {}, sum = 0, a = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> s[i];
            sum += s[i];
        }

        for (int i = 0; i < n; i++) {
            a += ((sum / n) - s[i]) * ((sum / n) - s[i]) / n;
        }

        printf("%.10f\n", sqrt(a));
        cin >> n;
    }
 }
