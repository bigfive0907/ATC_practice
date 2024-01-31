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
  int n;
  cin >> n;
  vector<int> qin(n), a(n), b(n);
  rep(i, 0, n) cin >> qin[i];
  rep(i, 0, n) cin >> a[i];
  rep(i, 0, n) cin >> b[i];

  // int max_a = *max_element(a.begin(),a.end());
  // size_t itr = distance(a.begin(), max_element(a.begin(), a.end()));
  vector<int> q(n);
  int count = 0;

  int min_qa = 1000010;
  //aの最大個数を考える
  for (int i = 0; i < n; i++)
  {
    if (a[i] == 0)
      continue;
    int qa = qin[i] / a[i];
    min_qa = min(qa, min_qa);
  }
  //aを0個から最大個数まで
  for (int i = 0; i <= min_qa; i++)
  {
    copy(qin.begin(), qin.end(), q.begin());
    //aの個数分すべての要素を引く
    for (int j = 0; j < n; ++j)
    {
      q[j] -= a[j] * i;
    }
    int b_min = 1000010;
    for (int j = 0; j < n; ++j)
    {
      if(b[j]==0)continue;
      int b_now = q[j] / b[j];
      b_min = min(b_min, b_now);
    }
    int local_count = i + b_min;
    count = max(count, local_count);
  }
  cout << count << endl;

  return 0;

}