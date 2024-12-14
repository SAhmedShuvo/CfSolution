#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define   MOD                    1000000007
#define   ll                     long long
#define   yes                    cout << "YES" << endl
#define   no                     cout << "NO" << endl
#define   vll                    vector<ll>
#define   pb                     push_back
#define   desort(vec)            sort(vec.rbegin(), vec.rend())
#define   mpair(x, y)            make_pair(x, y)
#define   rep(i, a, b)           for (ll i = a; i < (b); ++i)
#define   in                     insert
#define   gcd                    __gcd
#define   lcm(a, b)              (((a) * (b)) / gcd(a, b))
#define   INF                    INT64_MAX
 
 
void solve()
{
    ll n, m;
    cin>>n>>m;
    vll a(n);
    rep(i, 0, n) cin>>a[i];
    map<ll, ll> mp;
    rep(i, 0, n)
    {
        mp[a[i]%m]++;
    }
    ll ans=0;
  // for(auto k: mp)
   // cout<<k.first<<" - "<< k.second<<endl;
   //cout<<endl;
    for(auto k: mp)
    {
        if(k.first==0) ans+=1;
        else if(k.first*2==m) ans++;
        else{
            ll x= k.first;
            ll y= k.second;
            ll z= mp[m-x];
            if(y==z && y!=0) ans++;
            else if(y==0 || z==0) ans+=y+z;
            else if(y>z) { ans+= (y-z);}
            else ans+= (z-y);
            mp[x]=0;
            mp[m-x]=0;
        }
    }
    cout<<ans<<endl;
 
}
 
int main()
{
    fast;
    ll t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
