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
  for (int i = 1; i < 17; i += 2)
  {
    if (s[i] == '1')
    {
      cout << "No" << endl;
      exit(0);
    }
  }
  cout << "Yes" << endl;
  return 0;
}