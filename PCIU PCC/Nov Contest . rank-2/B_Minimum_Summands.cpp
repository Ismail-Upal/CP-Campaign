#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int32_t main()
{	opt();
 
    tc{
        string s; cin>>s;
        int n= sz(s);
        string t ="", z="";
        vector<string>v;
        for(int i=n-1; i>=0; i--){
            if(s[i] != '0'){
                t+= s[i];
                v.push_back(t+z);
            }
            t="";
            z+="0";
        }

        cout<<sz(v)<<endl;
        for(auto i: v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
 
    return 0;
}