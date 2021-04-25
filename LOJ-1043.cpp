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


//####   Approach:

//Here We can say that, if ADE:BDEC = x:y, then ADE : ABC = x:(x+y)
//As we get only one ration number so we can set this ratio to given ratio : 1 , that means ADE : ABC = given ratio : (given ratio+1)
//DE^2 : BC^2 = ADE : ABC , so we can say that DE : BC = sqrt(ADE : ABC) or, DE : BC = sqrt(given ratio : (given ratio+1))

//On the other hand, AD : AB = DE : BC,
//So the answer be like this:



void solve()
{
    ll cas=1;
    test{
        cout<<"Case "<<cas<<": ";
        cas++;

        double ab,ac,bc,rat;
        cin>>ab>>ac>>bc>>rat;

        double ans = ab*sqrt(rat/(rat+1));

        cout<<fixed<<setprecision(7)<<ans<<nn;
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
