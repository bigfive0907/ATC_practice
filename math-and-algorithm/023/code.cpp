#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

// int -2,147,483,648 ～ 2,147,483,647
// unsigned int	0 ～ 4,294,967,295
#define INF 100001
#define rep(i, a, n) for (int i = a; i < (n); ++i)

int main()
{
  int N;
  cin >> N;
  double B, R;
  rep(i, 0, N)
  {
    int tmp;
    cin >> tmp;
    B += tmp;
  }
  rep(i, 0, N)
  {
    int tmp;
    cin >> tmp;
    R += tmp;
  }
  double ans = 0;
  ans = B / N + R / N;
  cout << fixed << setprecision(12);
  cout << ans << endl;

  return 0;
}