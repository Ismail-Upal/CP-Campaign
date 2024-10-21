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
char upper(char c){
    return 'A'+(c-'a');
    
}
void solve(){
    string s;
    while(cin>>s){
        for(int i=0; i<s.size(); i++){
            s[i]=upper(s[i]);
        }
        cout<<s<<endl;
    }
    
}
int main()
{
    optimize();
    
        solve();
    
    return 0;
}