#include <bits/stdc++.h>
using namespace std;

int main()
{
  // makes stdin sdtout efficient;
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m, k;
  cin >> n >> m >> k;
  if (m >= n && k >= n)
  {
    cout << "Yes";
  }
  else
  {
    cout << "No";
  }
  return 0;
}