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
  ll ans = n;

  vector<ll> v;
  for (ll i = 2; i * i < n; ++i)
  {
    while (ans % i == 0)
    {
      ans /= i;
      v.push_back(i);
    }
  }
  if (ans != 1)
    v.push_back(ans);

  for (auto itr = v.begin(); itr != v.end(); ++itr)
  {
    if (itr == prev(v.end()))
      cout << *itr << endl;
    else
      cout << *itr << ' ';
  }
  return 0;
}