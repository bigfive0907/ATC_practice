#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;

#define rep(i,a,n) for (int i = a; i < (n); ++i)

set<int> count_num(set<int> s, int n, int a, int b){
  for(int i=1;i<=n;++i){
    if(i % b == 0 || i % a == 0){
      s.insert(i);
    }
  }
  return s;
}

int main(){
  int n,a,b;
  cin >> n >> a >> b;
  set<int> s{};
  set<int> ans(count_num(s,n,a,b));
  /*for (auto itr = ans.begin(); itr != ans.end(); ++itr) {
    cout << *itr;
  }*/
  cout << ans.size() << endl;
  return 0;
}