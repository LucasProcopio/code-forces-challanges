#include <bits/stdc++.h>

using namespace std;
int main()
{
  int n, a, h = 0;
  cin >> n;
  while (n--)
  {
    cin >> a;
    if (a == 1)
    {
      cout << "hard";
      h = 1;
      break;
    }
  }
  if (h == 0)
  {
    cout << "easy";
  }
  return 0;
}