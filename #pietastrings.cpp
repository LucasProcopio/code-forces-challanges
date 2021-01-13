#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define repe(i, a, n) for (int i = a; i <= n; i++)
#define pb push_back
#define bg begin
#define en end

typedef vector<int> VI;

//header

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  // code
  string a;
  string b;

  cin >> a >> b;
  int solution;

  // transform string to lowercase
  transform(a.begin(), a.end(), a.begin(),
    [](unsigned char c){ return std::tolower(c); });

  transform(b.begin(), b.end(), b.begin(),
    [](unsigned char c){ return std::tolower(c); });

  solution = a.compare(b);

  if(solution < 0) solution = -1;
  else if(solution == 0) solution = 0;
  else solution = 1;

  cout << solution; 
  return 0;
}