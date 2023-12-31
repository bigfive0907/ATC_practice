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
  ll N, W;
  cin >> N >> W;
  vector<ll> w(N+10), v(N+10);
  for (int i = 1; i <= N; i++) cin >> w[i] >> v[i];

  vector<vector<ll>> dp(N + 10, vector<ll>(W + 10));
  // initialize 0 rows
  dp[0][0] = 0;

  for (int i = 1; i <= W; i++)
  {
    dp[0][i] = -(1LL << 60);
  }

  for (int i = 1; i <= N; ++i)
  {
    for (int j = 0; j <= W; ++j)
    {
      // cant select item
      if (j < w[i])
        dp[i][j] = dp[i - 1][j];
      // can select item
      // max(before row's value, before row's value that differ from this item's weight + this item's value)
      if (j >= w[i])
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
    }
  }

  ll ans = 0;
  // W is max weight so we should compare all row N with max weight W
  for (int i = 0; i <= W; i++)
  {
    ans = max(ans, dp[N][i]);
  }

  cout << ans << endl;

  return 0;
}

