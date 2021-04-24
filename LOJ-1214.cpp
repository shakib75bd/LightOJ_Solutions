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
    string s1 = "divisible", s2 = "not divisible";
    string s;
    test{
        cout<<"Case "<<cas<<": ";
        cas++;

        cin>>s>>b;

        ll start = 0,rem =0;
        if(s[0]=='-') start=1;

        for(ll j=start;j<s.size();j++){
            rem = rem*10 + s[j]-'0';
            rem%=b;
        }

        if(rem) cout<<s2<<nn;
        else cout<<s1<<nn;
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
