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
  int w;
  cin >> w;

  while (w > 2)
  {
    w = w % 2;
  }

  if (w == 0)
  {
    cout << "YES";
    return 0;
  }
  cout << "NO";
  return 0;
}