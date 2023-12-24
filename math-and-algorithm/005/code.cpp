#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;

#define rep(i,a,n) for (int i = a; i < (n); ++i)

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }
  cout << accumulate(a.begin(),a.end(),0) % 100 << endl;
  return 0;
}