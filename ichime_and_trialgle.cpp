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

  int t;
  long long n;
  cin >> t;
  vector<vector<long long>> s(t, vector<long long>(4));
  rep(i, 0, t)
  {
    VI v;
    rep(x, 0, 4)
    {
      cin >> n;
      s[i][x] = n;
    }
    sort(s[i].begin(), s[i].end());
  }

  rep(i, 0, t)
  {
    rep(y, 0, 3)
    {
      if (y == 2)
      {
        cout << s[i][2] << ' ';
      }
      else
      {
        cout << s[i][y + 1] << ' ';
      }
    }
    cout << '\n';
  }
  return 0;
}