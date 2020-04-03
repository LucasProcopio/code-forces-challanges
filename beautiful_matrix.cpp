#include <bits/stdc++.h>

using namespace std;
int main()
{
  int n, cases, index_i = 0, index_x = 0, sq = 4;
  vector<vector<int>> matrix(5);

  for (int i = 0; i < 5; i++)
  {
    for (int x = 0; x < 5; x++)
    {
      cin >> n;
      matrix[i].push_back(n);
      if (n == 1)
      {
        index_x = x;
        index_i = i;
      }
    }
  }

  cout << "R" << index_i << "COL" << index_x << endl;

  switch (index_x)
  {
  case 4:
    index_x -= 3;
    break;
  case 3:
    index_x -= 2;
    break;
  case 2:
    index_x -= 0;
    break;
  case 1:
    index_x += 1;
  case 0:
    index_x += 2;
  default:
    break;
  }

  switch (index_i)
  {
  case 4:
    index_i -= 3;
    break;
  case 3:
    index_i -= 2;
    break;
  case 2:
    index_i -= 0;
    break;
  case 1:
    index_i += 1;
  case 0:
    index_i += 2;
  default:
    break;
  }

  cout << "R" << index_i << "COL" << index_x << "SUM" << index_x + index_i;
  return 0;
}