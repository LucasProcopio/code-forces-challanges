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

  int t;
  string s;
  cin >> t;

  rep(i, 0, t)
  {
    cin >> s;
    if (s.back() == 'o')
      cout << "FILIPINO\n";
    else if (s.back() == 'u')
      cout << "JAPANESE\n";
    else
      cout << "KOREAN\n";
  }
  return 0;
}