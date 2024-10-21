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
//#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=43;
int a[N][N];
void solve(){
    ll n; 
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    optimize();
    
    // Precomputing Pascal's triangle
    a[0][0] = 1;
    for(int i = 1; i < N; i++){
        a[i][0] = 1; 
        a[i][i] = 1;
        for(int j = 1; j < i; j++){
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
    
    tc{
        solve();
    }
    return 0;
}
