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

    // code
    int n, p = 0, m = 0;
    string s;
    cin >> n;

    vector<string> st;

    rep(i, 0, n)
    {
        cin >> s;
        if (s.find("-") != string::npos)
            m--;
        else
            p++;
    }

    cout << (p + m) << endl;
    return 0;
}