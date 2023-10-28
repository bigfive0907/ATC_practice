/*#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

#define rep(i, a, n) for (int i = a; i < (n); ++i) // loop処理
#define foreach(i, a) for (auto &i : a)            // range-based for
#define all(x) (x).begin(), (x).end()
#define than(a, x, b) (x) < (a) && (x) < (b)

int main()
{
  int n, m;
  int A;
  cin >> n >> m;
  map<ll, int> a;
  for (int i = 0; i < n; i++)
  {
    cin >> A;
    if (!a[A])
    {
      a[A] = 0;
    }
    a[A] += 1;
  }
  //[A1:2,A2:1,A6:1,...An:1] max 3*10^5
  int count = 0, max_count = 0;
  for (auto it = a.begin(); it != a.end(); it++)
  {
    ll key = (it->first);
    int value = (it->second);
    for (int j = 0; j < m; j++)
    {
      if (!a[key + j])
      {
        continue;
      }
      count += a[key + j];
    }
    if (count > max_count)
    {
      max_count = count;
    }
  }
  cout << max_count << endl;
  return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 3e5 + 9;
int s[N];
signed main()
{
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++)
    cin >> s[i];
  sort(s, s + n);
  int r = 0, res = 0;
  for (int l = 0; l < n; l++)
  {
    while (s[r] < s[l] + m && r < n)
      r++;
    res = max(res, r - l);
  }
  cout << res;
}