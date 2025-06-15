#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string, int> score;
  score["tourist"] = 3858;
  score["ksun48"] = 3679;
  score["Benq"] = 3658;
  score["Um_nik"] = 3648;
  score["apiad"] = 3638;
  score["Stonefeang"] = 3630;
  score["ecnerwala"] = 3613;
  score["mnbvmar"] = 3555;
  score["newbiedmy"] = 3516;
  score["semiexp"] = 3481;
  
  string s;
  cin >> s;
  
  cout << score.at(s) << endl; 
}

/*
解説より
#include <bits/stdc++.h>
using namespace std;

map<string, int> table = {
  {"tourist", 3858},
  {"ksun48", 3679},
  {"Benq", 3658},
  {"Um_nik", 3648},
  {"apiad", 3638},
  {"Stonefeang", 3630},
  {"ecnerwala", 3613},
  {"mnbvmar", 3555},
  {"newbiedmy", 3516},
  {"semiexp", 3481},
};

int main() {
  string s;
  cin >> s;
  cout << table[s] << endl;
  return 0;
}
*/