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
  int n;
  int front;
  cin >> n;
  vector<int>a(n);
  vector<int> b(n+10, -1);
  rep(i, 0, n) {
    int val;
    cin >> val;
    val--;
    if(val < 0){
      front=i;
    }
    else{
      b[val] = i;
    }
  }
  int count = 0;
  
  while(count < n){
    cout << front+1 <<  " ";
    front = b[front];
    count ++;
  }
  cout << endl;
  return 0;
}