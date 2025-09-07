#include <bits/stdc++.h>
using namespace std;

int main () {
  vector<int> vec(3);
  
  cin >> vec.at(0) >> vec.at(1) >> vec.at(2);

  if (vec.at(0) * vec.at(1) == vec.at(2)) {
    cout << "Yes" << endl;
  } else if (vec.at(2) * vec.at(0) == vec.at(1)) {
    cout << "Yes" << endl;
  } else if (vec.at(1) * vec.at(2) == vec.at(0)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
    