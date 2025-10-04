#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T> using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
//p.order_of_key(x), p.find_by_order(idx)
#define ll long long
#define dl double
#define endl "\n"
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n, c, d; cin>>n>>c>>d;
    vector<int>v(n*n);
    map<int,int>mp;
    for(int i=0; i<n*n; i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    sort(v.begin(), v.end());
    //for(auto i:v)cout<<i<<' ';
    int a[n][n]; a[0][0]=v[0]; mp[v[0]]--;
    bool ok = true;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            
            if(i==0 && j==0)continue;
            if(j==0)a[i][j]=a[i-1][j]+c;
            else a[i][j] = a[i][j-1]+d; 
            mp[a[i][j]]--;
        }
    }
    //for(auto i:mp)cout<<i.first<<" "<<i.second<<endl;
    for(auto i:mp){
        if(i.second!=0){
            ok=false;
            break;
        }
    }
    if(ok)Y;
    else N;
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}