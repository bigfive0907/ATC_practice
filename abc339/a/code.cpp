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
  cin >> s;
  int pos = 0;
  
  pos = s.rfind(".");
  s.erase(0, pos+1);

  cout << s << endl;
  return 0;
}