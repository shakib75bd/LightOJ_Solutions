//## Shakib Hossen Shanto
//## CSE,BRUR -|- April 2021

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
    ll cas=1;
    test{
        ll n,m,ans;
        cin>>n>>m;

        if(n==1 || m==1){
            ans = max(n,m);
        }
        else if(n==2 || m==2){
            ans = ((m*n)/8)*4;
            if((m*n)%8>4) ans+=4;
            else ans+=(m*n)%8;
        }
        else{
            if((n*m)%2) ans = ((n*m)+1) /2;
            else ans = (n*m)/2;
        }

        cout<<"Case "<<cas<<": "<<ans<<nn;
        cas++;
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
