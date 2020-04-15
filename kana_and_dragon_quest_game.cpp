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

  int t, dh, va, ls, suml = 0;

  cin >> t;
  rep(i, 0, t)
  {
    cin >> dh >> va >> ls;
    suml = ls * 10;
    int v = va, dha;
    dha = dh;
    dha -= suml;
    if (dha <= 0)
    {
      cout << "YES" << '\n';
      continue;
    }

    while (v--)
    {
      dh = (dh / 2) + 10;
    }

    dh -= suml;

    if (dh > 0)
      cout << "NO\n";
    else
      cout << "YES\n";
  }

  return 0;
}