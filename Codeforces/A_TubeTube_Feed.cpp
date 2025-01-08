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
        int n, t; 
        cin >> n>> t;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++)cin>>b[i];
        int ans = -1, idx =-1;
        for(int i=0; i<n; i++){
            if(i + a[i] <=t){
                if(b[i] >= ans){
                    ans = b[i];
                    idx = i+1;
                }
            }
            else break;
        }
        cout<< idx <<endl;
    }
 
    return 0;
}