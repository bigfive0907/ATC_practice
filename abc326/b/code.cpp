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
  int N;
  cin >> N;

  for (int i = N; i < 920; i++)
  {
    int first = i % 10;
    int second = (i % 100 - first) / 10;
    int third = (i - second - first) / 100;
    if (second * third == first)
    {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}