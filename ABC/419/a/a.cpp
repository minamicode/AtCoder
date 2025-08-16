#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
  
    if (s == "red") {
      cout << "SSS" << endl;
    } else if (s == "blue") {
      cout << "FFF" << endl;
    } else if (s == "green") {
      cout << "MMM" << endl;
    } else {
      cout << "Unknown" << endl;
    }

  return 0;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  if (s == "red") {
    cout << "SSS" << endl;
    return 0;
  }
  if (s == "blue") {
    cout << "FFF" << endl;
    return 0;
  }
  if (s == "green") {
    cout << "MMM" << endl;
    return 0;
  }
  cout << "Unknown" << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

string solve(string s) {
  if (s == "red") return "SSS";
  if (s == "blue") return "FFF";
  if (s == "green") return "MMM";
  return "Unknown";
}

int main() {
  string s;
  cin >> s;
  cout << solve(s) << endl;
  return 0;
}
*/