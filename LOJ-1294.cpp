//## Shakib Hossen Shanto
//## CSE,BRUR -|- April 2020 

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define frn(n)      for(ll i=0;i<n;i++)
#define flp(a,b)    for(ll i=a;i<=b;i++)
#define test        ll tes; cin>>tes; while(tes--)
#define nn          "\n"
#define yes         cout<<"YES\n"
#define no          cout<<"NO\n"


void solve()
{
    ll cas =1,b;
    ll n,m;
    test{
        cout<<"Case "<<cas<<": ";
        cas++;

        cin>>n>>m;
        cout<< (n/2)*m<<nn;
    }
}

//####  Main Function

int main()
{
    #ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();    return 0;
}
