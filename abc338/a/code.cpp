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
  string s;
  cin >> s;
  if(!isupper(s[0])){
    cout << "No" << endl;
    return 0;
  }
  for(int i=1; i<s.length();++i){
    if(isupper(s[i])){
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}