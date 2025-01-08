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
        vector<int>a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        int mon = a[n-1], ste = 0;
        for(int i = 0; i < n-1; i++){
            if(a[i] > b[i+1]){
                mon += a[i];
                ste += b[i+1];
            }
        }
        cout << mon-ste << endl;
    }
    
    return 0;
}