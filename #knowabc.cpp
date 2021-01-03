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
    int a;
    VI n;

    rep(i, 0, 7)
    {
        cin >> a;
        n.push_back(a);
    }

    sort(n.begin(), n.end());

    rep(i, 0, 7)
    {
        if ((n[0] + n[1] + n[i]) == n[6])
        {
            cout << n[0] << " " << n[1] << " " << n[i];
            break;
        }
    }

    return 0;
}