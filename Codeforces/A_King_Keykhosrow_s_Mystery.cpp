#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int32_t main()
{	opt();
 
    tc{
        int a, b; cin>>a>>b;
        // int i = min(a, b);
        // while(1){
        //     if(i%a==i%b){
        //         cout<<i<<endl;
        //         break;
        //     }
        //     i++;
        // }
        cout<<(a*b)/(__gcd(a,b))<<endl;
    }
 
    return 0;
}