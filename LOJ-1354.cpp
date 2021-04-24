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

ll decimal(ll x)
{
    ll sum=0,r,k=0;
    while(x>0)
    {
        r=x%10;
        sum=sum+r*pow(2,k);
        x=x/10;
        k++;
    }
    return sum;

}

void solve()
{
    ll cas=1;
    test{
        cout<<"Case "<<cas<<": ";
        cas++;

        ll ara1[4],ara2[4],m;
        char c;

        cin>>m;
        ara1[0]=m;
        m=0;
        for(ll i=1;i<4;i++){
            cin>>c>>ara1[i];
        }

        cin>>m;
        ara2[0]=m;

        for(ll i=1;i<4;i++){
            cin>>c>>ara2[i];
        }

        frn(4) ara2[i] = decimal(ara2[i]);
        

        bool flag = true;

        frn(4){
            if(ara1[i]!=ara2[i]) flag=false;
        }

        if(flag) yes;
        else no;
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
