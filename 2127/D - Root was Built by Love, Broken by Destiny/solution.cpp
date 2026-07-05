#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using vll = vector<ll>;
ll MOD = 1e9 + 7;
vll fact(2 * 1e5 + 1);
ll c1 = 0, c2 = 0;
bool is_b(vector<vll> &adj, ll node, vll&num, vector<bool>&vis, ll p)
{
    vis[node] = true;
    if (num[node])
        c1++;
    else
        c2++;
    for (auto nbr : adj[node])
    {
        if (nbr != p)
        {
            if (vis[nbr] || num[node] == num[nbr])
            {
                return false;
            }
            else
            {
                num[nbr] = num[node] ^ 1;
                bool res = is_b(adj, nbr, num, vis, node);
                if (!res)
                    return false;
            }
        }
    }
 
    return true;
}
bool is_bipartite(vector<vll> &adj)
{
    ll n = adj.size();
    vector<ll> num(n, -1);
    vector<bool> vis(n);
    num[0] = 0;
    return is_b(adj, 0, num, vis, -1);
}
 
ll count(vector<vll> &adj, ll node, ll p)
{
    ll onn = 0;
    for (auto nbr : adj[node])
    {
        if (adj[nbr].size() == 1)
        {
            onn++;
        }
    }
 
    ll ans = fact[onn];
    for (auto nbr : adj[node])
    {
        if (adj[nbr].size() > 1 && nbr != p)
        {
            ans *= count(adj, nbr, node);
            ans %= MOD;
        }
    }
 
    return ans;
}
ll solve(vector<vll> &adj)
{
    ll n = adj.size();
    return count(adj, 0, -1);
}
 
void solve()
{
    c1 = c2 = 0;
    ll n, m;
    cin >> n >> m;
    vector<vll> adj(n);
    for (int i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll ans = -1;
    if (!is_bipartite(adj))
        ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll cnt = 0;
        for (auto nbr : adj[i])
        {
            if (adj[nbr].size() > 1)
            {
                cnt++;
            }
        }
 
        if (cnt > 2)
        {
            ans = 0;
            break;
        }
    }
 
    if (ans == 0)
    {
        cout << "0
";
        return;
    }
    ans = solve(adj);
    if (c1 > 1 && c2 > 1)
        ans *= 2;
    ans %= MOD;
    cout << (ans * 2) % MOD << endl;
}
int main()
{
    ll t;
    cin >> t;
 
    fact[0] = 1;
    for (ll i = 1; i <= 2 * 1e5; i++)
    {
        fact[i] = (fact[i - 1] * i);
        fact[i] %= MOD;
    }
    while (t--)
    {
 
        solve();
    }
    return 0;
}