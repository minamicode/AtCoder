#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    for (int i = 1; i <= m; i++) {
        double sum = 0;
        double cnt = 0;
        for(pair<int, int> p : v) {
            if (p.first == i) {
                sum += p.second;
                cnt++;
            }
        }
        double ans = sum / cnt;
        printf("%.10lf\n", ans);
        sum = 0;
        cnt = 0;
    }

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(n);
  rep(i,n) cin >> a[i] >> b[i];

  rep(k,m) {
    int sum = 0, cnt = 0;
    rep(i,n) if (a[i] == k+1) {
      sum += b[i];
      cnt++;
    }
    double ans = 1.*sum/cnt;
    printf("%.10f\n", ans);
  }
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(n);
  rep(i,n) cin >> a[i] >> b[i];

  vector<vector<int>> weights(m);
  rep(i,n) weights[a[i]-1].push_back(b[i]);

  rep(k,m) {
    int sum = 0, cnt = 0;
    for (int w : weights[k]) sum += w, cnt++;
    double ans = 1.*sum/cnt;
    printf("%.10f\n", ans);
  }
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(n);
  rep(i,n) cin >> a[i] >> b[i];

  vector<int> sum(m), cnt(m);
  rep(i,n) sum[a[i]-1] += b[i];
  rep(i,n) cnt[a[i]-1]++;

  rep(k,m) {
    double ans = 1.*sum[k]/cnt[k];
    printf("%.10f\n", ans);
  }
  return 0;
}
*/