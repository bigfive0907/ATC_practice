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
 int k,g,m;
 cin >> k >> g >> m;
 int G=0,M=0;
 for (int i =0;i<k;i++){
    if(G==g) G=0;
    else if(M==0) M=m;
    else {
      while( M > 0 && G < g){
        G++;
        M--;
      }
    }
 }
 cout << G << " " << M << endl;
  return 0;
}