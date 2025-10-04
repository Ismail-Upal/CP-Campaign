#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    tc{
        int a, b; cin >> a >> b;
        if(a < b) swap(a,b);
        if((a+b) % 3 ==0 and b*2 >= a)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}