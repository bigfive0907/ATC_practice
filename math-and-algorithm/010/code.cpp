#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

#define INF 100001
#define rep(i, a, n) for (int i = a; i < (n); ++i)

ll recursive(int n)
{
  if (n == 0)
    return 1;
  else
    return recursive(n - 1) * n;
}

int main()
{
  int N;
  cin >> N;
  cout << recursive(N) << endl;
  return 0;
}