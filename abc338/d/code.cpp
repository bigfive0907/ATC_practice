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
  vector<int> q(n), a(n), b(n);
  rep(i,0,n) cin >> q[i];
  rep(i,0,n) cin >> a[i];
  rep(i,0,n) cin >> b[i];

  //int max_a = *max_element(a.begin(),a.end());
  //size_t itr = distance(a.begin(), max_element(a.begin(), a.end()));

  int count= 0;

  int max_qa = 0;
  for (int i = 0; i <n; i++){
    int qa = q[i]/a[i];
    max_qa = max(qa,max_qa);
  }
  {
    for (int i = 1; i <= max_qa; i++)
    {
      for (int j = 0; j < n; ++j)
      {
        q[j] -= a[j] * i;
      }
      int b_max = 0;
      for (int j = 0; j < n; ++j)
      {
        int b_now = q[j] / b[j];
        b_max = max(b_max, b_now);
      }
      int local_count = i + b_max;
      count = max(count, local_count);
    }
    cout << count << endl;

    return 0;
  }
}