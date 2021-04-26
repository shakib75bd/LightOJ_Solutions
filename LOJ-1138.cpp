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
#define LRG         1e9

//trailing zero of a number's factorial function from Geekforgeeks

int findTrailingZeros(int n)
{
    int count = 0;
 
    for (int i = 5; n / i >= 1; i *= 5) count += n / i;
 
    return count;
}

void solve()
{
    ll cas=1,n,m;
    string sim = "impossible";
    test{
        cout<<"Case "<<cas<<": ";
        cas++;

        cin>>n;

        //Using binary search for finding that number 
        //which's factorial contains n trailing zero

        ll begin=1,end=LRG,ans=-1;

        while(begin<=end){
            ll mid = (begin+end)/2;

            if(findTrailingZeros(mid)==n){
                ans = mid;
                end = mid-1;
            }
            else if(findTrailingZeros(mid)>n) end = mid-1;
            else if(findTrailingZeros(mid)<n) begin = mid+1;
        }

        if(ans==-1) cout<<sim<<nn;
        else cout<<ans<<nn;
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
