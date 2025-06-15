#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a, b, c;
  cin >> a >> b >> c;

  vector<int> vec;
  vec = { a, b, c };

  sort(vec.begin(), vec.end());

  cout << vec.at(0) << " " << vec.at(1) << " " << vec.at(2) << endl;
}
