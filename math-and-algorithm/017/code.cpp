#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

#define INF 100001
#define rep(i, a, n) for (int i = a; i < (n); ++i)

int main()
{
  ll n;
  cin >> n;
  vector<ll> v(n);
  rep(i, 0, n) cin >> v[i];
  ll ans = v[0];
  for (int i = 1; i < n; i++)
  {
    ans = lcm(v[i], ans);
  }
  cout << ans << endl;
  return 0;
}