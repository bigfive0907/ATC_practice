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
  string s, t;
  int n, m;
  cin >> n >> m >> s >> t;

  bool head = true;
  bool tail = true;

  for (int i = 0; i < n; i++)
  {
    if (s[i] != t[i])
      head = false;
  }
  for (int i = 0; i < n; i++)
  {
    if (s[i] != t[m - n + i])
      tail = false;
  }
  if (head && tail)
    cout << 0 << endl;
  else if (head && !tail)
    cout << 1 << endl;
  else if (!head && tail)
    cout << 2 << endl;
  else if (!head && !tail)
    cout << 3 << endl;
  return 0;
}