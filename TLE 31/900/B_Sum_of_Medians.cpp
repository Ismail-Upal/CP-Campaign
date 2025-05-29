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
        int n, k; cin >> n >> k;
        int N = n * k;
        vector<int> v(N + 1);
        for(int i = 1; i <= N; i++) cin >> v[i];
        int mid = (n + 2 - 1) / 2;
        int ind = n - mid + 1;
        reverse(v.begin()+1, v.end());
        ll sum = 0, j=1;
        for(int i = 1; i <= N; i++, j++){
            if(j == ind){
                sum += v[i]; 
                j=0;
                N -= n-ind;
            } 
        }
        // cout  << endl;
        
        cout << sum << endl;
    }
    
    return 0;
}