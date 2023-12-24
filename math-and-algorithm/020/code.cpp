#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

// int -2,147,483,648 ～ 2,147,483,647
// unsigned int	0 ～ 4,294,967,295
#define INF 100001
#define rep(i, a, n) for (int i = a; i < (n); ++i)

int main()
{
  ll n, cnt = 0;
  cin >> n;
  vector<ll> v(n);
  rep(i, 0, n) cin >> v[i];
  for (ll i = 0; i < n; ++i)
  {
    for (ll j = i + 1; j < n; ++j)
    {
      for (ll k = j + 1; k < n; ++k)
      {
        for (ll l = k + 1; l < n; ++l)
        {
          for (ll m = l + 1; m < n; ++m)
          {
            if (v[i] + v[j] + v[k] + v[l] + v[m] == 1000)
              cnt++;
          }
        }
      }
    }
  }

  cout << cnt << endl;
  return 0;
}