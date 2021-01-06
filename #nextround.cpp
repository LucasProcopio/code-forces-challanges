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

    int n, k, s;
    int contestants = 0;

    VI score;

    cin >> n >> k;

    rep(i, 0, n)
    {
        cin >> s;
        score.push_back(s);
    }

    rep(i, 0, n)
    {
        if (score[i] > 0 && score[i] >= score[k - 1])
        {
            contestants++;
        }
    }

    cout << contestants << endl;
    return 0;
}