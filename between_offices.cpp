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

  int n;
  cin >> n;
  char ss[n];
  cin >> ss;

  puts(ss[0] == 'S' && ss[n - 1] == 'F' ? "YES" : "NO");
  return 0;
}