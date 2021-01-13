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

  int posn = 0, posr = 0, num, col = 0, row = 0;

  // time complexity O(n2)
  rep(i, 0, 5)
  {
    rep(j, 0, 5)
    {
      cin >> num;
      if (num == 1)
      {
        posn = j + 1;
        break;
      }
    }
    posr++;
    if (posn != 0)
      break;
  }

  if (posn >= 3)
  {
    col = posn - 3;
  }
  else
  {
    col = 3 - posn;
  }

  if (posr >= 3)
  {
    row = posr - 3;
  }
  else
  {
    row = 3 - posr;
  }

  cout << col + row << endl;

  return 0;
}