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
#define sz(x) (ll)(x).size()
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n; cin>>n;
    char c[2][n];
    for(int i=0; i<2; i++){
        for(int j=0; j<n; j++){
            cin>>c[i][j];
        }
    }
    int cnt=0;
    for(int i=0; i<n-2; i++){
        if(c[0][i]=='.' && c[0][i+1]=='.' && c[0][i+2]=='.' && c[1][i]=='x'&&c[1][i+2]=='x'&&c[1][i+1]=='.'){
            cnt++;
        }
    }
    for(int i=0; i<n-2; i++){
        if(c[1][i]=='.' && c[1][i+1]=='.' && c[1][i+2]=='.' && c[0][i]=='x'&&c[0][i+2]=='x'&&c[0][i+1]=='.'){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}