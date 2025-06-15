#include <bits/stdc++.h>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    // hypot関数は、xとyの2辺の長さが指定された直角三角形の斜辺の長さを計算する（x2 + y2の平方根）
    double ans = hypot(x2 - x1, y2 - y1);

     printf("%.10lf\n", ans);
 }