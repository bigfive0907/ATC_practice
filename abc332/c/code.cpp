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
  int n,m;
  string s;

  cin >> n >> m;
  cin >> s;

  int t=m, l=0;
  int T=0, L=0;
  int rT=0 ,rL=0;

  for(int i=0;i<n;++i){
    if(s[i] == '2') {
      if(rL > 0){
        rL--;
      }else{
        L++;
      }}
    else if(s[i] == '1') {
      if(t>0){
        t--;
      }
      else if(rT > 0){
        rT--;
      }else if(rL > 0){
        rL--;
      }else{
        L++;
      }}
    else{
      rT=t,rL=L;

    }
  }
    cout << L << endl;

  return 0;
}