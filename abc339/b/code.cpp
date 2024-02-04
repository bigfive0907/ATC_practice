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
  int n,h,w;
  cin >> h >> w >> n;
  vector<vector<char>> v(h+10000,vector<char>(w+10000));
  v.assign(h + 10000, vector<char>(w + 10000, '.'));

  int a=1,b=1;
  int direction=0;//1,2,3で上右下左

  for(int i=0; i<n; i++){
    if(v[a][b] ==  '.'){
      v[a][b] = '#';
      if(direction == 0) {b++;direction=1;}
      else if(direction == 1) {a++;direction=2;}
      else if(direction == 2) {b--;direction=3;}
      else if(direction == 3) {a--;direction=0;}
    }
    else if (v[a][b] == '#')
    {
      v[a][b] = '.';
      if(direction == 0) {b--;direction=3;}
      else if(direction == 1) {a--;direction=0;}
      else if(direction == 2) {b++;direction=1;}
      else if(direction == 3) {a++;direction=2;}
    }
    if(b > w){
      b=1;
    }
    else if (b==0){
      b=w;
    }
    if(a > h){
      a=1;
    }
    else if (a==0){
      a=h;
    }
  }

  for(int i=1; i<=h; i++){
    for(int j=1; j<=w; j++){
      cout << v[i][j];
    }
    cout << endl;
  }

  return 0;
}