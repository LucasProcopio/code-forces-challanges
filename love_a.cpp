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

  string s;
  cin >> s;

  sort(s.begin(), s.end());
  int size = s.size(), sizeb;

  rep(i, 0, size)
  {
    if (s[i] != 'a')
    {
      s.erase(s.begin() + i, s.end());
      break;
    }
  }
  sizeb = s.size() * 2 - 1;
  cout << min(size, sizeb);
  return 0;
}