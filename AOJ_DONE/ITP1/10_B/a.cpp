#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double PI = 3.1415926535;
    double th = c * PI / 180.0;

    double s = a * b * sin(th) / 2.0;
    double l = a + b + sqrt(a * a + b * b - 2.0 * a * b * cos(th));
    double h = b * sin(th);

    printf("%.10lf\n", s);
    printf("%.10lf\n", l);
    printf("%.10lf\n", h);
 }
