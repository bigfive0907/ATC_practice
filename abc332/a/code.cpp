#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

#define rep(i, a, n) for (int i = a; i < (n); ++i) // loop処理
#define foreach(i, a) for (auto &i : a)            // range-based for
#define all(x) (x).begin(), (x).end()
#define than(a, x, b) (x) < (a) && (x) < (b)

int main()
{
  int n,s,k,sum=0;
  cin  >> n >> s >> k;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    int b ;
    cin >> b;
    sum += a*b;
  }

  if(sum < s)
    sum += k;
  
  cout << sum << endl;
  return 0;
}