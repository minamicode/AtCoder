#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, l;
    cin >> n >> m >> l;
    
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a.at(i).at(j);
        }
    }
    
    vector<vector<int>> b(m, vector<int>(l));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) { 
            cin >> b.at(i).at(j);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            int64_t c = 0;
            for (int k = 0; k < m; k++) {
                c += a.at(i).at(k) * b.at(k).at(j);
            }
            if (j == 0) {
                cout << c;
            } else {
                cout << " " << c;
            }
        }
    cout << endl;
    }
}