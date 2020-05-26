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

  int k;
  cin >> k;

  if ((k % 2 != 0) || k == 2)
  {
    cout << "NO";
  }
  else
  {
    cout << "YES";
  }
  return 0;
}