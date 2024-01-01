#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

// int -2,147,483,648 ～ 2,147,483,647
// unsigned int	0 ～ 4,294,967,295
// cout << fixed << setprecision(12);

#define INF 100001
#define rep(i, a, n) for (int i = a; i < (n); ++i)

int main()
{
  cout << fixed << setprecision(12);

  int N;
  cin >> N;
  vector<int> x(N), y(N);
  rep(i, 0, N) cin >> x[i] >> y[i];
  double dist = 100000;
  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      dist = min(dist, sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2)));
    }
  }
  cout << dist << endl;
  return 0;
}