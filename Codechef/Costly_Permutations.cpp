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
        deque<int> v(n), b;
        for(int i = 0; i < n; i++) cin >> v[i];
        int cur = v[0], f = 0;
        while(1){
            cur = v[v[0]];
            if(cur == v[0]){
                f = 1; break;
            }
        }
        if(f==1){cout << 0 << endl; continue;}
        int ls = (n+2-1)/2;
        int i = ls;
        b.push_front(1);
        while(i>1){
            b.push_back(i); i--;
        }
        ls++;
        while(ls <= n){
            b.push_front(ls); ls++;
        }
        for(auto i : b) cout << i << " ";
        
    }
    
    return 0;
}