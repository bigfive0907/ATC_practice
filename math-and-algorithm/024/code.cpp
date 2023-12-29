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
  cout << fixed << setprecision(12);
  int n;
  double ans = 0;

  cin >> n;
  vector<double> p(n), q(n);
  rep(i, 0, n)
  {
    cin >> p[i] >> q[i];
    ans += q[i] / p[i];
  }
  cout << ans << endl;

  return 0;
}