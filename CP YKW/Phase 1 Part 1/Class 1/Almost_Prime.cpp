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
#define dl double
#define endl "\n"
#define sz(x) (ll)(x).size()
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)


bool check_prime(int n){
    if(n<2)return false;
    for(int i=2; i<n; i++){
        if(n%i==0)return false;
    }
    return true;
}
bool almost_prime(int n, int prime[]){
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(n%i==0 and prime[i]==1)cnt++;
    }
    if(cnt==2)return true;
    else return false;
}

void solve(){
    int n; cin>>n;
    int ans=0;
    int prime[n];
    for(int i=1; i<=n; i++){
        if(check_prime(i))prime[i]=1;
        else prime[i]=0;
    }

    for(int i=1; i<=n; i++){
        if(almost_prime(i, prime))ans++;
    }
    cout<<ans;

}
int main()
{
    optimize();
    solve();
    return 0;
}