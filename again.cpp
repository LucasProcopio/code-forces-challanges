#include <bits/stdc++.h>

using namespace std;
int main()
{
  string s;
  getline(cin, s);
  s.erase(0, 1);

  istringstream iss(s);
  int number;
  iss >> number;

  if (number % 2 == 0)
  {
    cout << 0;
  }
  else
  {
    cout << 1;
  }
  return 0;
}