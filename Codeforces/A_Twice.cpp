#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int32_t main()
{	optimize();
 
    tc{
        int n; cin >> n;
        vector<int>v(n);
        for(int i=0; i<n ;i++) cin>>v[i];
        int ans =0;
        vector<int>b(n, 0);
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(v[i]==v[j] and b[j]==0 and b[i]==0){
                    ans++;
                    b[j]=1;
                    b[i]=1;
                }
            }
        }
        cout<<ans<<endl;
    }
 
    return 0;
}