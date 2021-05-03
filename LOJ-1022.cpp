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
        double r;
        cin>>r;

        double sq = (r*2)*(r*2);
        double cir = M_PI*r*r;

        cout<<fixed<<setprecision(2)<<sq-cir<<nn;
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
