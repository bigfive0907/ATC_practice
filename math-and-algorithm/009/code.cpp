#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

#define rep(i, a, n) for (int i = a; i < (n); ++i)
#define INF 100001

int main()
{
  int N, S;
  cin >> N >> S;
  vector<int> v(N + 1);
  for (int i = 0; i < N; ++i)
    cin >> v[i];
  vector<bool> flag(S + 1, false);
  flag[0] = true;
  for (int i = 0; i < N; ++i)
  {
    for (int j = S; j >= v[i]; --j)
    {
      if (flag[j - v[i]])
        flag[j] = true;
    }
  }
  cout << (flag[S] ? "Yes" : "No") << endl;
}

/*int main()
{
  int N, S;
  cin >> N >> S;
  vector<int> A(N + 1);
  for (int i = 1; i <= N; i++)
  {
    cin >> A[i];
  }
  vector<bool> flag(S + 1, false);
  flag[0] = true;

  for (int i = 1; i <= N; i++)
  {
    for (int j = S; j >= A[i]; j--)
    {
      if (flag[j - A[i]])
        flag[j] = true;
    }
  }
  if (flag[S])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}*/