#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

int Euclid(int a, int b)
{
  int n = a % b;
  if (n == 0)
    return b;
  return Euclid(b, n);
}
int main()
{
  int A = 529023, B = 352682;
  cout << Euclid(max(A, B), min(A, B)) << endl;
  return 0;
}