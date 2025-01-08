#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{	opt();
 
    tc{
        int n; cin >> n;
        vector<int>v(n+1);
        ll sum_odd = 0, sum_even = 0;
        for(int i=1; i<=n; i++){
            cin >> v[i];
            if(i % 2)sum_odd += v[i];
            else sum_even += v[i];
        }
        int odd_ind = (n+2-1) / 2 , even_ind = n/2;
        if(sum_even % even_ind ==0 and sum_odd % odd_ind == 0){
            if(sum_even / even_ind == sum_odd / odd_ind ){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
 
    return 0;
}