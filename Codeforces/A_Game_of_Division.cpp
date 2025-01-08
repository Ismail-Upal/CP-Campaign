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
        int n, k; cin >> n >> k;
        vector<int> v(n+1);
        int odd =0, even =0;
        for(int i=1; i<=n; i++){
            cin >> v[i];
            if(v[i]%2)odd++;
            else even++;
        }
        if(k%2==0){
            if(odd>0 and even>0){
                cout << "YES" << endl << 1 << endl;
            }
            else cout << "NO" << endl;
        }
        else{
            
        }
    }
 
    return 0;
}