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
  ll ax, ay, bx, by, cx, cy;
  cin >> ax >> ay >> bx >> by >> cx >> cy;
  // ベクトルを定義
  ll BAx = ax - bx;
  ll BAy = ay - by;
  ll BCx = cx - bx;
  ll BCy = cy - by;
  ll CAx = ax - cx;
  ll CAy = ay - cy;
  ll CBx = bx - cx;
  ll CBy = by - cy;
  // 内積から点Aの位置を判定
  int pattern = 2;
  if (BAx * BCx + BAy * BCy < 0)
  {
    pattern = 1;
  }
  if (CAx * CBx + CAy * CBy < 0)
  {
    pattern = 3;
  }

  double ans = 0;
  if (pattern == 1)
  {
    ans = sqrt(pow(BAx, 2) + pow(BAy, 2));
  }
  if (pattern == 3)
  {
    ans = sqrt(pow(CAx, 2) + pow(CAy, 2));
  }
  if (pattern == 2)
  {
    // 外積から平行四辺形の面積を求めて底辺で割る
    double S = abs(BAx * BCy - BAy * BCx);
    double h = S / sqrt(pow(BCx, 2) + pow(BCy, 2));
    ans = h;
  }
  cout << ans << endl;
  return 0;
}