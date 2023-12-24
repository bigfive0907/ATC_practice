#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

#define INF 100001
#define rep(i, a, n) for (int i = a; i < (n); ++i)

int main()
{
  ll n,a;
  cin >> n;
  multiset<ll> v;
  rep(i, 0, n) {
    cin >> a;
    v.insert(a);
  }
  ll cnt = 0;
  cnt += v.count(100)*v.count(400);
  cnt += v.count(200)*v.count(300);

  cout << cnt << endl;
  return 0;
}