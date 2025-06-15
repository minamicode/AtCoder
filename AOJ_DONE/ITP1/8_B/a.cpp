#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    while (s.at(0) != '0') {
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            sum += s.at(i) - '0';
        }
        cout << sum << endl;
        cin >> s;
    }
}