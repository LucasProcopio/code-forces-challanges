#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define repe(i, a, n) for (int i = a; i <= n; i++)
#define repi(i, a, n) for (int i = a; i > n; i--)
#define repie(i, a, n) for (int i = a; i >= n; i--)
#define pb push_back
typedef vector<int> VI;
//header

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);
    // code
    vector<pair<int, int>> p;
    int a, b;
    VI resp;

    rep(i, 0, 4)
    {
        cin >> a >> b;
        p.push_back(make_pair(a, b));
    }

    int gol = p[3].second - p[3].first;
    int sil = p[2].second - p[2].first + p[3].second - p[3].first;
    int bron = p[1].second - p[1].first + p[2].second - p[2].first + p[3].second - p[3].first;

    cout << bron << endl
         << sil << endl
         << gol << endl;

    return 0;
}