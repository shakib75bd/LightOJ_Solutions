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
    ll n,cas=1;
    test{
        cin>>n;

        if(n==1) cout<<"Case "<<cas<<": Impossible\n"; 
        else if(n%2==1)  cout<<"Case "<<cas<<": Impossible\n"; 
        else{
            ll ans;
            bool flag = false;
            for(ll i=2;i<(n/2);i*=2){
                if((n%i)==0 && (n/i)%2==1){
                    flag = true;
                    ans = i;
                }
            }

            if(flag) cout<<"Case "<<cas<<": "<<n/ans<<" "<<ans<<nn;
            else cout<<"Case "<<cas<<": Impossible\n"; 
        }
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
