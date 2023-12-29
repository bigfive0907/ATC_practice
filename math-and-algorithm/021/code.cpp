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
  int n, r;
  cin >> n >> r;
  // combination
  ll ans = 1;
  for (int i = 0; i < r; i++)
  {
    ans *= n - i;
    ans /= i + 1;
  }

  cout << ans << endl;
  return 0;
}