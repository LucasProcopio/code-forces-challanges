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
    int np;
    int counter = 0;
    cin >> np;

    rep(i, 0, np)
    {
        int a, b, c;
        int sum;
        cin >> a >> b >> c;
        sum = a + b + c;
        if (sum > 1)
        {
            counter++;
        }
    }

    cout << counter << endl;
    return 0;
}