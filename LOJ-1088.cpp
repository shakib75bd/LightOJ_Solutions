//## Shakib Hossen Shanto
//## CSE,BRUR -|- April 2021

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define frn(n)      for(ll i=0;i<n;i++)
#define flp(a,b)    for(ll i=a;i<=b;i++)
#define test        ll tes; cin>>tes; while(tes--)
#define nn          "\n"
#define yes         cout<<"Yes\n"
#define no          cout<<"No\n"


void solve()
{
    ll cas=1,qu1,qu2,ops;
    test{
        cout<<"Case "<<cas<<":"<<nn;
        cas++;

        ll n,q;
        cin>>n>>q;

        ll ara[n];
        frn(n){
            cin>>ara[i];
        }

        //using binary search for finding lower and upper range

        ll begin,end;

        while(q--){
            cin>>qu1>>qu2;

            begin = upper_bound(ara,ara+n,qu2)-ara;
            end = lower_bound(ara,ara+n,qu1) - ara;

            cout<<begin-end<<nn;
        }
            
    }
}


int main()
{
    #ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();    return 0;
}
