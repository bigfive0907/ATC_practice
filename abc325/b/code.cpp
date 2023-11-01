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
  int n;
  cin >> n;

  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++)
  {
    // 人数 >>　
    cin >> a[i] >> b[i];
  }
  // 時間を選んで回す
  //[] => capture =とかある
  // FixTimeはintが返る関数
  auto FixTime = [](int B, int time)
  {  
    if(B+time >= 24){
      B-=24;
    }
    B += time;
    //cout << B << "\n";
    return B; };

  int maxcount = 0;
  for (int j = 0; j < 24; j++)
  {
    int count = 0;
    for (int k = 0; k < n; k++)
    {

      int h = FixTime(b[k], j); //; １時間ごとの処理
      if (h < 18 && h > 8)
      {
        count += a[k];
      }
    }
    maxcount = max(maxcount, count);
  }
  cout << maxcount << endl;
  return 0;
}