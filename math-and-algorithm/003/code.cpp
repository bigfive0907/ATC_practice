#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

#define rep(i, a, n) for (int i = a; i < (n); ++i)

int main()
{
  int n,ans=0;
  cin >> n;
  while(n>0){
    int k;
    cin >> k;
    ans += k;
    n--;
  }

  cout << ans << endl;
  return 0;
}