#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

// int -2,147,483,648 ～ 2,147,483,647
// unsigned int	0 ～ 4,294,967,295
// cout << fixed << setprecision(12);

#define INF 100001
#define rep(i, a, n) for (int i = a; i < (n); ++i)
vector<ll> a;

void fifth(ll n){
  if(n < 5){
    a.push_back(n*2);
  }
  else{
    fifth(n/5);
    a.push_back(n%5*2);
  }
}
int main()
{
  ll n;
  cin >> n;
  fifth(n-1);
  reverse(a.begin(), a.end());
  for(ll i = a.size()-1; i >= 0; i--){
    cout << a[i];
  }
  cout << endl;
  return 0;
}