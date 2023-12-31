#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

// int -2,147,483,648 ～ 2,147,483,647
// unsigned int	0 ～ 4,294,967,295
// cout << fixed << setprecision(12);

#define INF 100001
#define rep(i, a, n) for (int i = a; i < (n); ++i)

int chmin(int a, int b)
{
  if (a < b)
  {
    return a;
  }
  return b;
}

vector<int> Frog(vector<int> a, int n)
{
  vector<int> f(n, 0);
  for (int i = 0; i < n; ++i)
  {
    if (i == 0)
    {
      f[i] = 0;
    }
    else if (i == 1)
    {
      f[i] = abs(a[1] - a[0]);
    }
    else
    {
      f[i] = chmin(f[i - 1] + abs(a[i] - a[i - 1]), f[i - 2] + abs(a[i] - a[i - 2]));
    }
    // cout << f[i] << endl;
  }
  return f;
}

int chmax(int a, int b)
{
  if (a > b)
  {
    return a;
  }
  return b;
}

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, 0, N) cin >> A[i];
  vector<int> F{Frog(A, N)};
  cout << F.at(N - 1) << endl;
  return 0;
}