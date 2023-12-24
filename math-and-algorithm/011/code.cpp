#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

#define INF 100001
#define rep(i, a, n) for (int i = a; i < (n); ++i)

int main()
{
  int n;
  cin >> n;
  vector<int> v{2};
  for (int i = 3; i <= n; ++i)
  {
    bool flag = true;
    for (int j = 2; j < i; ++j)
    {
      if (i % j == 0)
        flag = false;
    }
    if (flag)
    {
      v.push_back(i);
    }
  }

  for (auto itr = v.begin(); itr != v.end(); ++itr)
  {
    if (itr == v.end() - 1)
      cout << *itr << endl;
    else
      cout << *itr << ' ';
  }
  return 0;
}