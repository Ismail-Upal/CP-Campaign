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
        ll a,b,c; cin>>a>>b>>c;
        ll nd=0;
        if(b%3!=0){
            nd=(((b/3)+1)*3)-b;
            if(nd>c){
                cout<<-1<<endl;
                continue;
            }
        }
        ll ans=a;
        if(b%3==0)ans+=b/3;
        else ans+=((b/3)+1);
        c-=nd;
        if(c%3==0)ans+=(c/3);
        else ans+=((c/3)+1);
        cout<<ans<<endl;
    }
    return 0;
}

