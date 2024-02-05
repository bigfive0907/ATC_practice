#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

#define rep(i, a, n) for (int i = a; i < (n); ++i) // loop処理
#define foreach(i, a) for (auto &i : a)            // range-based for
#define all(x) (x).begin(), (x).end()
#define than(a, x, b) (x) < (a) && (x) < (b)

vector<ll> a;

void to_nine(ll n){
  if(n<9){
    a.push_back(n);
  }else{
    to_nine(n/9);
    a.push_back(n%9);
  }
}

ll fix_nine(ll n){
  to_nine(n);
  stringstream s;
  for(size_t i=0;i<a.size();i++)
  {
    if (a[i] == 8)
    {
      a[i] = 5;
    }
    s << a[i];
  }
  n = stoi(s.str());
  return n;
}
ll eight_to_ten(ll n){
  string num = to_string(n);
  for(size_t i=0;i<num.size();i++){
    a.push_back(pow(8,i)*num[num.size()-1-i]);
  }
  return accumulate(all(a),0);
}


int main()
{
  ll n,k;
  cin >> n >> k;
  while(k>0){
    n = eight_to_ten(n);
    a.clear();
    n = fix_nine(n);
    a.clear();
    k--;
  }
  cout << eight_to_ten(n) << endl;
  a.clear();
  cout << fix_nine(17) << endl;
  a.clear();
  cout << n << endl;
  return 0;
}