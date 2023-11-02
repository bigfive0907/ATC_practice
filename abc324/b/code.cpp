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

  if (n % 3 == 0 || n % 2 == 0)
  {
    cout << "Yes" << endl;
    return 0;
  }
  int m = n;
  while (m >= 2)
  {
    if (m / 2 == 0)
    {
      cout << "Yes" << endl;
      return 0;
    }
    m /= 3;
  }
  while (n >= 3)
  {

    if (n / 3 == 0)
    {
      cout << "Yes" << endl;
      return 0;
    }
    n /= 2;
  }
  cout << "No" << endl;
  return 0;
}