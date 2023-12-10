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
  vector<string> v(n);
  vector<int> l(n);
  vector<P> out(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v.at(i);
    l.at(i) = count(v[i].begin(), v[i].end(), "o");
  }
  for (int i = 0; i < n; i++)
  {
    auto itr = max_element(l.begin(), l.end());
    int val = *max_element(l.begin(), l.end());
    size_t index = distance(l.begin(), itr);
    out.at(i) = make_pair(val, index);
  }

  sort(out.begin(), out.end());
  for (int i = 0; i < n; i++)
  {
    cout << out[i].second << " ";
  }
  return 0;
}