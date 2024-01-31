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
  string s;
  vector<int> a(130,0);
  cin >> s;
  for(int i = 0; i<s.size();++i){
    a[int(s[i])]++;
  }
  auto iter = max_element(a.begin(), a.end());
      size_t index = distance(a.begin(), iter);
  cout << char(index) << endl;
  return 0;
}