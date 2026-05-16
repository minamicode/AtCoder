#include <bits/stdc++.h>
using namespace std;
int main() {
  int h, w;
  cin >> h >> w;
  
  if (h == 1 && w == 1) {
    cout << 0 << endl;
  } else if (h == 1) {
    for (int i = 0; i < w; i++) {
      if (i == 0 || i == w - 1) {
        cout << 1 << " ";
      } else {
        cout << 2 << " ";
      }
    }
    cout << endl;
  } else if (w == 1) {
    for (int i = 0; i < h; i++) {
      if (i == 0 || i == h - 1) {
        cout << 1 <<  endl; 
      } else {
        cout << 2 <<  endl;
      }
    }
  } else {
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (i == 0 && j == 0) {
          cout << 2 << " ";
        } else if (i == 0 && j == w - 1) {
          cout << 2 << " ";
        } else if (i == h - 1 && j == 0) {
          cout << 2 << " ";
        } else if (i == h - 1 && j == w - 1) {
          cout << 2 << " ";
        } else if (i == 0 || i == h - 1) {
          cout << 3 << " ";
        } else if (j == 0 || j == w - 1) {
          cout << 3 << " ";
        } else {
          cout << 4 << " ";
        }
      }
      cout << endl;
    }
  }

  return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

const int di[] = {-1,0,1,0};
const int dj[] = {0,-1,0,1};

int main() {
  int h, w;
  cin >> h >> w;

  rep(i,h) {
    rep(j,w) {
      int cnt = 0;
      rep(v,4) {
        int ni = i+di[v], nj = j+dj[v];
        if (ni < 0 || nj < 0 || ni >= h || nj >= w) continue;
        cnt++;
      }
      cout << cnt << ' ';
    }
    cout << endl;
  }
  return 0;
}
*/