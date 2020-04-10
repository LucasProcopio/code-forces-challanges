#include <bits/stdc++.h>
using namespace std;

int main()
{
  // makes stdin sdtout efficient;
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m, q, y;
  string s;
  vector<string> sa;
  vector<string> sb;
  vector<string> answer;
  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
    cin >> s;
    sa.push_back(s);
  }

  for (int i = 0; i < m; i++)
  {
    cin >> s;
    sb.push_back(s);
  }

  cin >> q;

  while (q--)
  {
    string a;
    cin >> y;
    y--;

    a = sa[y % n];
    a.append(sb[y % m]);
    answer.push_back(a);
  }

  for (int k = 0; k < answer.size(); k++)
  {
    cout << answer[k] << '\n';
  }
  return 0;
}