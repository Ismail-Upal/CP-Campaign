//Man Rabbuka ?
//Ma Dinuka ?
//Man Nabiyyuka ? 
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T> using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
//p.order_of_key(x), p.find_by_order(idx)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int main()
{
    optimize();

    int n, m; 
    cin>>n>>m;
    char a[n+2][m+2];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<=n+1; i++){
        for(int j=0; j<=m+1; j++){
            if(i==0 or i==n+1 or j==0 or j==m+1)a[i][j]='0';
        }
    }
    int x,y; cin>>x>>y;

    int l[8]={-1,-1,-1,0,1,1,1,0};
    int r[8]={-1,0,1,1,1,0,-1,-1};

    bool ok = true;
    for(int i=0; i<8; i++){
        if(a[x+l[i]][y+r[i]]=='.'){
            ok = false;
            break;
        }
    }
    if(ok)cout<<"yes";
    else cout<<"no";
    return 0;
}