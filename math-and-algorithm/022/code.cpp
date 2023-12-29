#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

// int -2,147,483,648 ～ 2,147,483,647
// unsigned int	0 ～ 4,294,967,295
#define INF 100001
#define rep(i, a, n) for (int i = a; i < (n); ++i)

int main()
{
  ll N;
  cin >> N;
  vector<ll> A(100000);
  for (ll i = 0; i < N; i++)
  {
    ll a;
    cin >> a;
    // 入力から出現回数の配列を作成
    A[a]++;
  }

  ll num = 0;
  for (int i = 1; i < 50000; i++)
  {
    num += A[i] * A[100000 - i];
  }
  num += A[50000] * (A[50000] - 1) / 2;
  cout << num << endl;
}