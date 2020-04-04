#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  string a, b, c;
  cin >> n;
  a = "I hate ";
  b = "";
  c = "it";
  if (n == 1)
  {
    cout << a + c;
    return 0;
  }
  for (int i = 1; i < n; i++)
  {
    if (i % 2 == 1)
    {
      b += "that I love ";
    }
    else
    {
      b += "that I hate ";
    }
  }
  cout << a + b + c;
  return 0;
}