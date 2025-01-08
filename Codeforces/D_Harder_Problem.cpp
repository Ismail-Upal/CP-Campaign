#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
const int N = 1e6;
int mp[N];
int32_t main()
{   
    opt();
 
    tc{
        memset(mp, 0, sizeof(mp));
        int n; cin >> n; 
        vector<int>v(n), ans, nai;
        unordered_set<int> st;

        for(int i = 0; i < n; i ++){
            cin >> v[i];
            st.insert(v[i]);
        }

        for(int i = 1; i <= n; i++){
            if(st.find(i) == st.end()){
                nai.push_back(i);
            }
        } 
        for(int i = 0; i < n; i++){
            if(mp[v[i]] > 0)ans.push_back(-v[i]);
            else ans.push_back(v[i]), mp[v[i]]++;
        }

        int j = 0;
        for(int i = 0 ; i < n; i++){
            if(ans[i] < 0) ans[i] = nai[j], j++;
            if(j == sz(nai)) j = 0;
        }
        for(auto i : ans) cout << i << " ";
        cout << endl;
    }
    
    return 0;
}