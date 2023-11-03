#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

#define rep(i, a, n) for (int i = a; i < (n); ++i) // loop処理
#define foreach(i, a) for (auto &i : a)            // range-based for
#define all(x) (x).begin(), (x).end()
#define than(a, x, b) (x) < (a) && (x) < (b)
vector<vector<int>> memo;
int partial(int i, int w, const vector<int> &a)
{
  if (w < 0)
    return false;
  if (i == 0)
  {
    if (w == 0)
      return true;
    else
      return false;
  }
  if (memo[i][w] != -1)
  {
    cout << i << w << endl;
    return memo[i][w];
  }

  if (partial(i - 1, w, a))
    return memo[i][w] = 1;
  if (partial(i - 1, w - a[i - 1], a))
    return memo[i][w] = 1;

  return memo[i][w] = 0;
}
int main()
{

  vector<int> a{1, 2, 3, 5, 6};
  int n = a.size(), w = 15;
  memo.assign(n + 1, vector<int>(w + 1, -1));

  if (partial(n, w, a))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}