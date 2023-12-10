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
  int n,x;
  cin >> n >> x;
  vector<int> a(n-1);
  for(int i=0;i<n;++i){
    cin >> a[i];
  }

  for(int i=0;i<101;++i){
    vector<int>b = a;
    b.push_back(i);
    sort(b.begin(),b.end());

    int summation = accumulate(b.begin()+1,b.end()-1,0) ;
    if(summation>=x){
      cout << i << endl;
      exit(0);
    }

  }
  cout << -1 << endl;


  return 0;
}