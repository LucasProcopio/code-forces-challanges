#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int q, a;
  vector<int> n;
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    cin >> a;
    n.push_back(a);
  }

  for (int x = 0; x < q; x++)
  {
    if (n[x] == 2)
    {
      cout << 2 << '\n';
    }
    else if (n[x] % 2 == 0)
    {
      cout << 0 << '\n';
    }
    else
    {
      cout << 1 << '\n';
    }
  }
  return 0;
}