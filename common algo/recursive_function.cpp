#include <bits/stdc++.h>
using namespace std;
long long rec(unsigned long n)
{
  if (n == 0)
    return 1;
  return n * rec(n - 1);
}
int main()
{
  int val;
  cin >> val;
  cout << rec(val) << endl;
  return 0;
}