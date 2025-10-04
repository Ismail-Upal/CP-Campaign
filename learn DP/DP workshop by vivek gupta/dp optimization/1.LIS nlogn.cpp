#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    int n; cin >> n;
    vector<int> v(n), lis, Insert;
    
    for(int i = 0; i < n; i++) cin >> v[i] ;

    for(int i = 0; i < n; i++){
        if(lis.empty() || lis.back() < v[i]){
            lis.push_back(v[i]);
            Insert.push_back(lis.size());
        }
        else{
            int lo = lower_bound(lis.begin(), lis.end(), v[i]) - lis.begin();
            lis[lo] = v[i];
            Insert.push_back(lo + 1);
        }
    }

    cout << lis.size() << endl;

    int len = lis.size();
    vector<int> path;

    for(int i = n - 1; i >= 0; i--){
        if(Insert[i] == len){
            path.push_back(v[i]);
            len--;
        }
    }
    reverse(path.begin(), path.end());
    for(int i : path) cout << i << " ";
    
    return 0;
}