#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;

//int -2,147,483,648 ～ 2,147,483,647
//unsigned int	0 ～ 4,294,967,295
//cout << fixed << setprecision(12);

#define INF 100001
#define rep(i,a,n) for (int i = a; i < (n); ++i)

int main()
{
  ll N;
  vector<ll> a(500010, 0);
  vector<ll> dp(500010, 0);
  cin >> N;
  rep(i, 0, N) cin >> a[i];
  dp[0] = a[0];
  dp[1] = max(a[0], a[1]);
  rep(i, 2, N)
  {
    dp[i] = max(dp[i - 2] + a[i], dp[i - 3] + a[i]);
  }
  cout << dp[N - 2] << endl;
  return 0;
}