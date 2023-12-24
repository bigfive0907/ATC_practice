#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

// int -2,147,483,648 ～ 2,147,483,647
// unsigned int	0 ～ 4,294,967,295
// unsigned int	0 ～ 4,294,967,295
// unsigned int	0 ～ 4,294,967,295
#define INF 100001
#define rep(i, a, n) for (int i = a; i < (n); ++i)

int main()
{
  ll n, cnt = 0;
  cin >> n;
  vector<ll> card(n + 1);
  rep(i, 0, n) cin >> card[i];
  for (int i = 1; i <= 3; ++i)
  {
    ll same_color_count = count(card.begin(), card.end(), i);
    for (int j = 0; j < same_color_count; ++j)
      cnt += j;
  }

  cout << cnt << endl;
  return 0;
}