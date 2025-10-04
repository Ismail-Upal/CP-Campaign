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
    string s; cin>>s;
    int op=0;
    for(int i=0; i<sz(s); i++){
        if(s[i]=='_' && op==0)s[i]='(', op++;
        else if(s[i]=='_' && op>0)s[i]=')', op--;
        else if(s[i]=='(')op++;
        else if(s[i]==')')op--;
    }
    int i=0,j=0, ans=0;
    while(j<sz(s)){
        if(s[i]=='(' && s[j]==')'){
            ans+=(j-i);
            i++,j++;
        }
        if(s[i]!='(')i++;
        if(s[j]!=')')j++;
    }
    cout<<ans<<endl;
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}