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

    int n, i;
    string s;
    cin >> n;
    vector<string> words;

    rep(i, 0, n)
    {
        cin >> s;
        int chars = s.size();
        int qt = chars - 2;
        string shorts;

        if (chars <= 10)
        {
            words.pb(s);
        }
        else
        {
            shorts = s[0] + to_string(qt) + s[chars - 1];
            words.pb(shorts);
        }
    }

    rep(i, 0, n)
    {
        cout << words[i] << endl;
    }

    return 0;
}