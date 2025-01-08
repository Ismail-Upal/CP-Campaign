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
        int n, m, k; cin >> n>> m>>k;
        string s; cin >> s;
        int z=0, ans=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0')z++;
            else z=0;
            if(z==m){
                ans++;
                i+= k-1;
                z=0;
            }
        }
        cout << ans << endl;
    }
 
    return 0;
}