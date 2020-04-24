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

  int n, i, p;
  cin >> n;
  VI v(n, 0);

  rep(x, 0, n)
  {
    cin >> v[x];
  }

  rep(a, 0, n)
  {
    rep(b, 0, n)
    {
      if (a + 1 == v[b])
      {
        cout << b + 1 << " ";
      }
    }
  }
  return 0;
}