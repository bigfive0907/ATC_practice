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
  int k;
  cin >> k;
  long long b=0;
  string ans,out;

  while(k>=0){
    ans = to_string(b);
    bool flag = true;

    //judge whether 321 like number
    for(int i=0;i<ans.size();++i){
      if(int(ans[ans.size()-i]) >= ans[ans.size()-i-1]){
        flag = false;
        break;
      }
    }

    if(flag == true){
      out = ans;
      k--;
    }
    b += 1;
  }
  cout << out << endl;

  return 0;
}