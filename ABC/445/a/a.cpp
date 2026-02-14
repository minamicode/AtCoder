#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;

    int n = s.size() - 1;
    
    if (s.at(0) == s.at(n)) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }

    return 0;
}