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
        int n; cin >> n;
        vector< int > v(n);
        int one = 0, zero = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] == 1)one ++;
            if(v[i] == 0) zero ++;
        }
        
        cout << (1*1LL << zero) * one << endl;
    }
    
    return 0;
}