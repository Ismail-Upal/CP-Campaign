#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
bool iscomposit(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0)return true;
    }
    return false;
}
int32_t main()
{	optimize();
 
    tc{
        int n; cin>>n;
        if(n<=4){cout<<-1<<endl; continue;}
        
        int i=1; 
        while(i<=n){
            cout<<i<<' '; i+=2;
        }
        i-=2; int j=2;
        while(!iscomposit(i+j)){
            j+=2;
        }
        cout<<j<<" ";
        int k=2;
        while(k<=n){
            if(k!=j)cout<<k<<" ";
            k+=2;
        }
        cout<<endl;
    }
 
    return 0;
}