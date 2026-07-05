#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using vll = vector<ll>;
 
void solve()
{
    ll n;
    cin >> n;
    vll v(n);
    for (auto &i : v)
        cin >> i;
 
    set<ll> st;
    for (auto i : v)
        if (i != -1)
            st.insert(i);
 
    if (st.size() > 1 || (*st.begin() == 0))
    {
        cout << "NO
";
    }
    else
        cout << "YES
";
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