#include <bits/stdc++.h>
using namespace std;

int main()
{
  // makes stdin sdtout faster;
  ios::sync_with_stdio(0);
  cin.tie(0);

  int sum = 0, n;
  char c[20];

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> c;
    if (c[0] == 'I')
    {
      sum += 20;
    }
    if (c[0] == 'C')
    {
      sum += 6;
    }
    if (c[0] == 'T')
    {
      sum += 4;
    }
    if (c[0] == 'O')
    {
      sum += 8;
    }
    if (c[0] == 'D')
    {
      sum += 12;
    }
  }
  cout << sum;
  return 0;
}