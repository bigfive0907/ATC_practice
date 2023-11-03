#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

#define rep(i, a, n) for (int i = a; i < (n); ++i) // loop処理
#define foreach(i, a) for (auto &i : a)            // range-based for
#define all(x) (x).begin(), (x).end()
#define than(a, x, b) (x) < (a) && (x) < (b)

vector<long long> memo;
unsigned long long fib(int n)
{
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;

  if (memo.at(n) != -1)
  {
    cout << memo.at(n) << endl;
    return memo.at(n);
  }

  return memo.at(n) = fib(n - 1) + fib(n - 2);
}
int main()
{
  // n<50と仮定する
  memo.assign(51, -1);
  int N = 50;
  cout << fib(N) << endl;
  return 0;
}