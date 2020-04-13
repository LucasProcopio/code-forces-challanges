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

  int t, n;
  cin >> t;
  rep(i, 0, t)
  {
    bool ans = true;
    int p = 0, c = 0;
    cin >> n;
    rep(j, 0, n)
    {
      int x, y;
      cin >> x >> y;
      if (x < p || y < c || y - c > x - p)
        ans = false;
      p = x, c = y;
    }
    puts(ans ? "YES" : "NO");
  }

  return 0;
}