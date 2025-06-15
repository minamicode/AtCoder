#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int s;
  cin >> s;
  
  int h = s / 3600;
  int m = (s - (h * 3600)) / 60; // s % 3600 / 60
  s = s - (h * 3600) - (m * 60); // s % 60

  cout << h << ':' << m << ":" << s << endl;
}