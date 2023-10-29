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
  int x, y;
  cin >> x >> y;
  if (x > y && x - y <= 3)
  {
    cout << "Yes" << endl;
    return 0;
  }
  else if (x < y && y - x <= 2)
  {
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;

  return 0;
}