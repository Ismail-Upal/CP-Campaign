#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll a,b,c; cin>>a>>b>>c;
    ll flag=0;
    for(ll i=a; i<=b; i++){
        if(i%c==0){
            flag=i;
            break;
        }
    }
    if(flag==0)cout<<-1;
    else cout<<flag;
    return 0;
}