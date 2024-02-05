#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

// int -2,147,483,648 ～ 2,147,483,647
// unsigned int	0 ～ 4,294,967,295
// cout << fixed << setprecision(12);

#define INF 100001
#define rep(i, a, n) for (int i = a; i < (n); ++i)

int main()
{
  int h,w;
  cin >> h >> w;
  vector<vector<int>> a(h,vector<int>(w));
  vector<vector<int>> b(h + 10000, vector<int>(w + 10000, 0));
  vector<int> c(w + 10000, 0);
  vector<int> d(w + 10000, 0);

  //b.assign(h,vector<int>(w,0));
  rep(i,0,h){
    rep(j,0,w){
      cin >> a[i][j];
    }
  }
  rep(i,0,h){
    c[i] += accumulate(a[i].begin(), a[i].end(), 0);
    rep(j,0,w){
      d[j] += a[i][j];
    }
  }
  rep(i,0,h){
    rep(j,0,w){
      cout << c[i]+ d[j] - a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}