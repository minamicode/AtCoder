#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t.at(i);
    }
    
    vector<int> v(n);
    v = t;

    sort(v.begin(), v.end());

    int one = 1, two = 1, three = 1;
    for (int i = 0; i < n; i++) {
        if (t.at(i) == v.at(0)) {
            one += i;
        } else if (t.at(i) == v.at(1)) {
            two += i;
        } else if (t.at(i) == v.at(2)) {
            three += i;
        }  
    }

    cout << one << " " << two << " " << three << endl;
    return 0;
}