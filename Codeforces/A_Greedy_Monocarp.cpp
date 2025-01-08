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
        int n, k; cin >> n>> k;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        sort(v.rbegin(), v.rend());

        int ans =0, sum= 0;
        for(int i=0; i<n; i++){
            if(v[i]+sum <=k){
                sum += v[i];
            }
            else{
                ans = k-sum;
                break;
            }
        }
        if(ans+sum < k)ans = k-sum;
        cout<<ans<<endl;
    }
 
    return 0;
}