#include <bits/stdc++.h>
using namespace std;

int main()
{
  // makes stdin sdtout efficient;
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, sol = 0;
  scanf("%d", &n);

  for (int i = 2; i <= n; i++)
  {
    if (n % i == 0)
    {
      sol++;
    }
  }

  printf("%d", sol);
  return 0;
}