#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> x(n);
	for (int i = 0; i < n; ++i) {
		cin >> x[i];
	}

	vector<double> y(n);
	for (int i = 0; i < n; ++i) {
		cin >> y[i];
	}

    double d1 = 0.0, d2 = 0.0, d3 = 0.0, di = 0.0;

    for (int i = 0; i < n; i++) {
        double d = abs(x[i] - y[i]);
        
        d1 += d;
        d2 += d * d;
        d3 += d * d * d;
        di = max(di, d);
    }

    printf("%.10lf\n", d1);
    printf("%.10lf\n", sqrt(d2));
    printf("%.10lf\n", pow(d3, 1.0 / 3.0));
    printf("%.10lf\n", di);
 }
