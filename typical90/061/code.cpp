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
  ll q;
  cin >> q;
  vector<ll> a;
  rep(i,0,q){
    ll t,x;
    cin >> t >> x;
    if(t==1){
      a.insert(a.begin(),x);
    }else if(t==2){
      a.push_back(x);
    }else if(t==3){
      cout << a[x-1] << endl;
    }
  }
  return 0;
}