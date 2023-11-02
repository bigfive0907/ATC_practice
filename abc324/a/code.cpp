#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

#define rep(i, a, n) for (int i = a; i < (n); ++i) // loop処理
#define foreach(i, a) for (auto &i : a)            // range-based for
#define all(x) (x).begin(), (x).end()
#define than(a, x, b) (x) < (a) && (x) < (b)

int another(int before, int after)
{
  cin >> after;
  if (before != after)
  {
    cout << "No" << endl;
    exit(0);
  }
}

int main()
{
  int n, init, next;
  cin >> n >> init;

  while (1 < n)
  {
    another(init, next);
    n--;
  }

  cout << "Yes" << endl;
  return 0;
}