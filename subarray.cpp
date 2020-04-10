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

  // subarray is a continuous copy of the original array
  // the copy may have more than length of one
  // but it has to be in sequence
  int array[8] = {-1, 2, 4, -3, 5, 2, -5, 2};
  int best = 0;
  int sum = 0;
  rep(a, 0, 8)
  {
    sum = max(array[a], sum + array[a]);
    best = max(best, sum);
  }

  cout << best;
  return 0;
}