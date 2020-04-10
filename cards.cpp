#include <bits/stdc++.h>
using namespace std;

int main()
{
  // makes stdin sdtout efficient;
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, zc = 0, nc = 0;
  string s;
  cin >> n >> s;

  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'z')
    {
      zc++;
    }
    else if (s[i] == 'n')
    {
      nc++;
    }
  }

  for (int x = 0; x < nc; x++)
  {
    cout << "1 ";
  }

  for (int x = 0; x < zc; x++)
  {
    cout << "0 ";
  }
  return 0;
}