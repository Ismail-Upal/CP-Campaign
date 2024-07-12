#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t; cin>>t;
    while(t--){
        ll n,a,b;
        cin>>n>>a>>b;
        string s; cin>>s;
        ll on=0,zr=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')zr++;
            else if(s[i]=='1')on++;
        }
       
        //1-->0
        ll ans1=on*a;
        ll op2=(on/2)*b; 
        op2+=(on%2)*min(a,2*b);
        ans1=min(ans1, op2);

        //0-->1
        ll ans2=zr*a;
        ll opp2=zr*b;
        ans2=min(ans2,opp2);
        
        

        cout<<min(ans2,ans1)<<endl;
    }
    return 0;
}