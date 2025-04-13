#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  
  set<pair<char, int>> cards;
	for (int i = 0; i < n; i++) {
		char suit;
		int number;
		cin >> suit >> number;
		cards.insert(make_pair(suit, number));
	}
	
	string suit_string = "SHCD";
	for (int i = 0; i < 4; i++) {
		for (int j = 1; j <= 13; j++) {
			if (cards.find(make_pair(suit_string[i], j)) == cards.end()) {
				cout << suit_string[i] << " " << j << endl;
			}
		}
	}
}