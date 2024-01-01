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
  ll X, N;
  cin >> N >> X;
  vector<int> A(N,-1);
  rep(i, 0, N) cin >> A[i];
  sort(A.begin(), A.end());
  cout << (binary_search(A.begin(), A.end(), X) ? "Yes" : "No") << endl;
  return 0;
}