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
  int n;
  cin >> n;
  string s;
  cin >> s;
  bool flag = false;
  string ans = "ABC";

  for (int i = 0; i < n - 2; i++)
  {
    if (s.substr(i, 3) == ans)
    {
      flag = true;
      cout << i + 1 << "\n";
      break;
    }
  }
  if (flag == false)
    cout << "-1" << endl;

  return 0;
}