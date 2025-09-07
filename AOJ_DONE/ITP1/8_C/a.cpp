#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int a[26] = {};
    
    while (getline(cin, s)) {
        for (int i = 0; i < s.size(); i++) {
            if (s.at(i) >= 'a' && s.at(i) <= 'z') {
                a[s.at(i) - 'a']++;
            } else if (s.at(i) >= 'A' && s.at(i) <= 'Z') {
                a[s.at(i) - 'A']++;
            }
        }
    }
    
    for (int i = 0; i < 26; i++) {
        cout << (char)('a' + i) << " : " << a[i] << endl;
    }
 }