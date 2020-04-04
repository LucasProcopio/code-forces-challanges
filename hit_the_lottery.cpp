#include <bits/stdc++.h>
using namespace std;

int getNumBills(int n, vector<int> b);
int main()
{
  // makes stdin sdtout efficient;
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, b;
  int arr[] = {100, 20, 10, 5, 1};
  vector<int> den(arr, arr + sizeof(arr) / sizeof(arr[0]));
  cin >> n;
  b = getNumBills(n, den);
  cout << b;
  return 0;
}

int getNumBills(int n, vector<int> den)
{
  int size = den.size(), bill = 0, i = 0;

  while (i < size)
  {
    if (n >= den[i])
    {
      n -= den[i];
      bill++;
      continue;
    }
    else
    {
      i++;
    }
  }

  return bill;
}