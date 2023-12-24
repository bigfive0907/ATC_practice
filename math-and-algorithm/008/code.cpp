#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;

#define rep(i,a,n) for (int i = a; i < (n); ++i)

int main(){
  int n,s,cnt=0;
  cin >> n >> s;
  for(int i=1; i<=n; ++i){
    for(int j=1; j<=n; ++j){
      if(i+j <= s) cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}