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

  int m,n,sq,solution;
  cin>>m>>n;
  sq = m*n;
  if((sq % 2) == 1)
  {
    solution = (sq  - 1) / 2;
  } else {
    solution = sq / 2;
  }

  cout << solution;
  return 0;
}