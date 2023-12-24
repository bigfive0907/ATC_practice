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
  set<ll> s;
  for (ll i = 1; i < sqrt(double(n) + 1); ++i)
  {
    if (n % i == 0)
    {
      s.insert(i);
      s.insert(n / i);
    }
  }

  for (auto itr = s.begin(); itr != s.end(); ++itr)
  {
    cout << *itr << endl;
  }

  return 0;
}