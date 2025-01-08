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
        int n, m, k; cin >> n >> m >> k;
        vector<int>lst(m);
        set<int>ques;
        for(int i = 0; i < m; i++)cin >> lst[i];
        for(int i = 0; i < k; i++){
            int x; cin >>x;
            ques.insert(x);
        }
        //for(auto i : lst) cout <<i;
        for(int i = 0; i < m; i++){
            if(k==n) cout << 1 ;
            else if(k<n-1) cout << 0;
            else if(ques.find(lst[i]) != ques.end())cout <<0;
            else cout << 1 ;
        }
        cout << endl;
    }
    
    return 0;
}