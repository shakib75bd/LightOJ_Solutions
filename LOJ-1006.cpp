//## Shakib Hossen Shanto
//## CSE,BRUR 

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
    int cas=1;
    test{
        cout<<"Case "<<cas<<": ";
        cas++;

        //We can get n maximum 10000 so stay in safe side and declare

        ll ara[10005],n;
        //firstly we can get the value of a,b,c,d,e,f (the first 6 numbers)
        frn(6) cin>>ara[i];
        //and n
        cin>>n;

        //just do what the problem says now

        flp(6,n){
            ll sum=0;
            for(ll j=1;j<=6;j++) sum+=ara[i-j];
            ara[i] = sum%10000007;
        }

        cout<<ara[n]%10000007<<nn;
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
