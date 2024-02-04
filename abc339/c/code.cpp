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
  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i, 0, n) cin >> a[i];
  ll ans=0;
  bool sum_plus= true;

  for(int i=0;i<abs(*min_element(a.begin(),a.end())+10);++i){
    ll sum = i;
    sum_plus = true;
    for (int j = 0; j < n; j++)
    {
      sum += a[j];
      if(sum < 0){
        sum_plus = false;
        break;
      }
    }

    if (sum_plus)
    {
      ans = sum;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}