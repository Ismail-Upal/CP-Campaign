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
    string s; cin>>s;
    int f=0;
    for(int i=1; i<sz(s);i++){
        char ch;
            if(s[i]=='z')ch = 'y';
            else if(s[i]=='a')ch='b';
            else ch=s[i]+1;
        
        if(s[i]==s[i+1]){
            continue;
            
        }
        else if(s[i]==s[i-1]){
            f=1;
            s.insert(s.begin()+i, ch);break;
        }
    }
    if(!f){
        char ch;
        if(s[sz(s)-1]=='z')ch = 'y';
            else if(s[sz(s)-1]=='a')ch='b';
            else ch=s[sz(s)-1]+1;
        s+= ch;
    }
    cout<<s<<endl;
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}