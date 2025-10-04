#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t;cin>>t;
    while(t--){
        ll n; cin>>n; 
        char c; cin>>c;
        string s; cin>>s;
        s=s+s;
        
        ll ans=0,j=0;
        for(ll i=0;i<n;i++){
            if(s[i]==c){
                for(j=i+1;j<2*n;j++){
                    if(s[j]=='g'){
                        ans=max(ans, j-i);
                        i=j;
                        break;
                    }
                }
            }
        }
        if(c=='g')cout<<0<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}