#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (isalpha(s.at(i))) {
            if (islower(s.at(i))) {
                s.at(i) = toupper(s.at(i));
            } else if (isupper(s.at(i))) {
                s.at(i) = tolower(s.at(i));
            }
        }
    }
    cout << s << endl;
 }