#include <bits/stdc++.h>
using namespace std;

int main()
{
  // makes stdin sdtout efficient;
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, i = 4;
  vector<int> x;
  while (i--)
  {
    cin >> n;
    x.push_back(n);
  }

  sort(x.begin(), x.end());
  cout << x[3] - x[0] << " " << x[3] - x[1] << " " << x[3] - x[2];
  return 0;
}