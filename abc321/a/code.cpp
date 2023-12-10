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
 string n;
 cin >> n;
 bool flag = true;

 for(int i=0;i<n.size()-1;++i){
  if(int(n[n.size()-i-1]) <= int(n[n.size()-i])){
    flag = false;
  }
 }

 cout << (flag ? "Yes":"No") << endl;

  return 0;
}