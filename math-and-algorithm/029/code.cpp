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
  ll n,dp[50];
  cin >> n;
  dp[0] = 1;
  dp[1] = 1;
  rep(i,2,n+1){
    dp[i] = dp[i-1] + dp[i-2];
  }

  cout << dp[n] << endl;
  return 0;
}