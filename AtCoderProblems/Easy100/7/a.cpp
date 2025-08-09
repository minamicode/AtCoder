#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<int>> a(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a.at(i).at(j);
        }
    }

    int n;
    cin >> n;

    vector<vector<int>> x(3, vector<int>(3));

    while (n != 0) {
        int b;
        cin >> b;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (b == a.at(i).at(j)) {
                    x.at(i).at(j) = 1;
                } 
            }
        }
        n--;
    }

    bool ans = false;

    for (int i = 0; i < 3; i++) {
        int cnt = 0;
        for (int j = 0; j < 3; j++) {
            cnt += x.at(i).at(j);
        }
        if (cnt == 3) {
            ans = true;
        }
    }
    
    for (int i = 0; i < 3; i++) {
        int cnt = 0;
        for (int j = 0; j < 3; j++) {
            cnt += x.at(j).at(i);
        }
        if (cnt == 3) {
            ans = true;
        }
    }

    {
        int cnt = 0;
        for (int j = 0; j < 3; j++) {
            cnt += x.at(j).at(j);
        }
        if (cnt == 3) {
            ans = true;
        }
    }


    {
        int cnt = 0;
        for (int j = 0; j < 3; j++) {
            cnt += x.at(j).at(2-j);
        }
        if (cnt == 3) {
            ans = true;
        }
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
       
    return 0;
}