#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define repe(i, a, n) for (int i = a; i <= n; i++)
#define pb push_back
typedef vector<int> VI;
//header

// sums of parts challange
int minimumTime(int numOfParts, vector<int> parts)
{
  VI sums;
  int ans = 0, sum = 0, best = 0;
  sort(parts.begin(), parts.end());
  for (int i = 0; i < numOfParts - 1; i++)
  {
    sum = max(parts[i], sum + parts[i]);
    best = max(best, sum);
    sums.pb(best + parts[i + 1]);
  }

  rep(i, 0, sums.size())
  {
    ans += sums[i];
  }
  return ans;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, partn;
  VI v;
  cin >> n;
  rep(i, 0, n)
  {
    cin >> partn;
    v.pb(partn);
  }
  cout << minimumTime(n, v);

  return 0;
}