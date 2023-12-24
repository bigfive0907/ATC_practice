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
  bool flag = true;
  for (ll i = 2; i < sqrt(double(n))+1; ++i)
  {
    if (n % i == 0)
      flag = false;
  }
  cout << (flag ? "Yes" : "No") << endl;
  return 0;
}