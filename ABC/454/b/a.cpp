#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  
  vector<int> f(n);
  for (int i = 0; i < n; i++) {
    cin >> f.at(i);
  }
  
  set<int> s;
  for (int i = 0; i < n; i++) {
    s.insert(f.at(i));
  }
  
  if (f.size() == s.size()) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  bool yes = true;
  for (int i = 1; i <= m; i++) {
    if (s.count(i)) {
      yes = true;
    } else {
      yes = false;
      break;
    }
  }
  
  if (yes) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  return 0;
}

/*
#include <iostream>
#include <set>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  set<int> S;
  for (int i = 0; i < N; i++) {
    int F;
    cin >> F;
    S.insert(F);
  }
  cout << ((int)S.size() == N ? "Yes" : "No") << "\n";
  cout << ((int)S.size() == M ? "Yes" : "No") << "\n";
}

*/