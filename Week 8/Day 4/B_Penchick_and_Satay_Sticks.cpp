#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int32_t main()
{   optimize();
 
    tc{
        int n; cin >> n; 
        vector<int> v(n);
        for(int i = 0; i < n; i++)cin >> v[i];
        for(int i = 0; i < n-1; i++){
            if(v[i] == v[i+1]+1){
                swap(v[i], v[i+1]);
            }
        }
        if(is_sorted(v.begin(), v.end()))cout << "YES" << endl;
        else cout << "NO" << endl;
    }
 
    return 0;
}