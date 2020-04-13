#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define repe(i, a, n) for (int i = a; i <= n; i++)
#define pb push_back
typedef vector<int> VI;
//header
int findMiddle(int n);
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, r, c, ans = 0;
  vector<vector<int>> mtrx(5, vector<int>(5));
  rep(i, 0, 5)
  {
    rep(x, 0, 5)
    {
      cin >> n;
      if (n == 1)
      {
        r = i;
        c = x;
      }
      mtrx[i].pb(n);
    }
  }

  ans += findMiddle(r);
  ans += findMiddle(c);

  cout << ans;
  return 0;
}

int findMiddle(int n)
{
  int solution = 0;
  if (n == 2)
    return solution;

  if (n > 2)
  {
    while (n > 2)
    {
      n--;
      solution++;
    }
    return solution;
  }

  if (n < 2)
  {
    while (n < 2)
    {
      n++;
      solution++;
    }
    return solution;
  };

  return solution;
}