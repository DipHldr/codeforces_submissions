#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using vll = vector<ll>;
 
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<vll> v(n, vll(2));
    for (int i = 0; i < n; i++)
        cin >> v[i][0];
    for (int i = 0; i < n; i++)
        cin >> v[i][1];
 
    for (int i = 0; i < n; i++)
    {
        v[i] = {min(v[i][0], v[i][1]),
                max(v[i][0], v[i][1])};
    }
    sort(v.begin(), v.end());
    bool mil = false;
    for (int i = 1; i < n; i++)
    {
        if (v[i][0] <= v[i - 1][1])
        {
            mil = true;
        }
    }
 
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (v[i][1] - v[i][0]);
    }
    if (!mil)
    {
        ll tmp = LONG_LONG_MAX;
        for (int i = 1; i < n; i++)
        {
            ll val = v[i][1] - v[i][0] + v[i - 1][1] - v[i - 1][0];
 
            ll v2 = v[i][1] - v[i - 1][0] + v[i][0] - v[i - 1][1];
            tmp = min(tmp, ans - val + v2);
        }
        ans = tmp;
    }
    cout << ans << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
 
        solve();
    }
    return 0;
}