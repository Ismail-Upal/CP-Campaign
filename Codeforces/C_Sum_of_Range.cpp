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

        ll a, b; cin >> a >> b;
        if(a > b) swap(a, b);
        a--;
        ll sum_all = (b * (b + 1) / 2) - (a * (a + 1) / 2); 
        ll sum_ev = ((b/2) * ((b/2) + 1)) - ((a/2) * ((a/2) + 1));
        ll sum_od = sum_all - sum_ev;
        cout << sum_all << endl << sum_ev << endl << sum_od << endl;
    
    return 0;
}