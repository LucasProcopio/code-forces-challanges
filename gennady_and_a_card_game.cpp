#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  bool y = false;
  string card;
  vector<string> h(5);
  cin >> card;

  for (int i = 0; i < 5; i++)
  {
    cin >> h[i];
    if (h[i][0] == card[0] || h[i][0] == card[1])
    {
      cout << "YES";
      y = true;
    }
    else if (h[i][1] == card[0] || h[i][1] == card[1])
    {
      cout << "YES";
      y = true;
    };

    if (y)
    {
      return 0;
    }
  }
  cout << "NO";
  return 0;
}