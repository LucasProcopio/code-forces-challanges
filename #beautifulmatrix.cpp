#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define repe(i, a, n) for (int i = a; i <= n; i++)
#define pb push_back
typedef vector<int> VI;
//header

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int num, posn = 0, posr = 0;
  
  rep(i,0,5){

    rep(j,0,5){
      cin>>num;
      if (num == 1) {
        posn = j + 1;
        break;
      }
    }
    posr++;
    if(posn != 0) break;
  }

  int row = 0;
  int col = 3 - posn;

  if(posr >= 3) {
    row = 3 - posr;
  } else {
    row = posr - 3;
  }

  if(posn >= 3) {
    row = 3 - posn;
  } else {
    row = posn - 3;
  }

  cout << (row + col) << endl;

  return 0;
}