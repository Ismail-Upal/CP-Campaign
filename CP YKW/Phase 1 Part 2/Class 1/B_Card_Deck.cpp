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
        int n ; cin>> n;
        deque<int>v(n), cur, maxvec(n);
        int mxx = -1;
        for(int i=0; i<n; i++){
            cin >> v[i];
            mxx = max(v[i], mxx);
            maxvec[i] = mxx;
        }
        int mx = n; 
        for(int i=n-1; i>=0; i--){
            if(v[i]==mx){
                cur.push_front(v[i]);
                for(auto j: cur)cout<<j<<' ';
                cur.clear();
                if(i>0)mx = maxvec[i-1];
                
            }
            else{
                cur.push_front(v[i]);
            }
        }
        cout<<endl;
    }
 
    return 0;
}