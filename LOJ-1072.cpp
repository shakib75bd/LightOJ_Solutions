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

// Well, Firstly we need to find out the angle for every small ball
// I mean the angle of the small arcs.
// Then we can easily divide it into two arcs.  And by adding a vertical
// height , we just need to imagine a Right angled triangle
// and apply its rule with sin. Thats all


void solve()
{
    ll cas=1;
    test{
        cout<<"Case "<<cas<<": ";
        cas++;

        double big_r,n;
        cin>>big_r>>n;

        double theta = (360/n)/2;
        theta = (M_PI*theta)/180;
        theta = sin(theta);
        //cout<<theta<<nn;
        double ans = (big_r * theta) / (1 + theta);

        cout<<fixed<<setprecision(10)<<ans<<nn;
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
